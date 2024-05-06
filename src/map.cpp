#include "../include/map.h"
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <vector>

using namespace std;
// Map
void Map::bfs(string start) {
  map<string, bool> visited;
  queue<string> traversingQueue,savingQueue;

  visited[start] = true;
  traversingQueue.push(start);

  while (!traversingQueue.empty()) {
    string currentCityName;
    currentCityName = traversingQueue.front();
    savingQueue.push(currentCityName); // here we save the current city to print it later
    traversingQueue.pop();
    for (auto to : adjList[currentCityName]) {
      if (!visited[to.first]) {
        visited[to.first] = true;
        traversingQueue.push(to.first);
      }
    }
  }
  
  printSavedTraverse(savingQueue);// call the function that prints the saved traversed queue
}
void Map::printSavedTraverse(queue<string> traverseQueue){
  while(!traverseQueue.empty()){
    cout << traverseQueue.front() << " ";
    traverseQueue.pop();
  }
}
int Map::compute_hash(string s) {
  long long ret = 0, pw = 1;
  int i = 1;
  const int mod = 1e3, p = 31;
  for (auto c : s) {
    if (c >= 'a' && c <= 'z') {
      ret = ((ret % mod) + ((pw % mod) * (c - 'a' + 1) % mod) % mod) % mod;
      pw = ((pw * mod) * (p % mod)) % mod;
    } else {
      ret = ((ret % mod) + ((pw % mod) * (c - 'A' + 1) % mod) % mod) % mod;
      pw = ((pw * mod) * (p % mod)) % mod;
    }
  }
  return ret;
}
long long Map::Dijkstra(string node, string distination) {
  cout << "ya rab\n";
  priority_queue<pair<long long, string>> pq; // < -cost , city >
  map<string, pair<string, transportations>> par;
  long long dis[int(1e3)]; // [hash(city)]
  memset(dis, 0x3fffff, sizeof dis);
  pq.push({0, node});
  dis[compute_hash(node)] = 0;
  while (!pq.empty()) {
    long long cost;
    string city;
    tie(cost, city) = pq.top();
    cost *= -1;
    pq.pop();
    for (auto to : adjList[city]) {

      int hash = compute_hash(to.first);
      long long mn = (dis[hash] == -1 ? 100000 : dis[hash]);
      transportations t;
      for (auto r : to.second.roads) {
        if (cost + r.cost < mn) {
          mn = cost + r.cost;
          t = r.transport;
        }
      }
      if (dis[hash] == -1 || mn < dis[hash]) {
        dis[hash] = mn;
        pq.push({-mn, to.first});
        par[to.first] = {city, t};
      }
    }
  }
  return dis[compute_hash(distination)];
}
int Map::getNumberOfEdges() {
  int cnt = 0;
  for (auto i : Map::adjList) {
    cnt += i.second.size();
  }
  return cnt / 2;
}