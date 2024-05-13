#include "../include/map.h"

#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;
// Map
map<transportations, string> findTransport = { {BUS, "Bus"},
                                          {MICROBUS, "Microbus"},
                                          {TRAIN, "Train"},
                                          {METRO, "Metro"},
                                          {UBER, "Uber"} };
void Map::bfs(string start) {
    map<string, bool> visited;
    queue<string> traversingQueue, savingQueue;

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
void Map::printSavedTraverse(queue<string> traverseQueue) {
    while (!traverseQueue.empty()) {
        cout << traverseQueue.front() << " ";
        traverseQueue.pop();
    }
}
int Map::compute_hash(string s) {
    return hash[s] = (hash[s] == 0 ? ++cnt : hash[s]);
}

vector<pair<string, string>> Map::saveCheapestPath(map<string, pair<string, transportations>> par, string distination)
{

    vector<pair<string, string>>v;
    for (auto parent = par[distination]; parent.first != "-1"; parent = par[parent.first]) {
        v.push_back({ parent.first,findTransport[parent.second] });
        //cout << parent.first << "\n";
    }
    reverse(v.begin(), v.end());
    //  int n = v.size();
    // example to print the cheapest path
     /* for (int i = 0; i < n; i++) {
          if (i == 0)
              cout << " form " << v[i].first << " take " << ' ' << v[i].second << " to ";
          else
              cout << v[i].first << " then  take " << ' ' << v[i].second << " to ";;
      }
      cout << distination << "\n";*/
    return v;
}

pair<long long, vector<pair<string, string>>> Map::Dijkstra(string node, string distination) {

    priority_queue<pair<long long, string>> pq; // < -cost , city >
    map<string, pair<string, transportations>> par;
    long long dis[150]; // [hash(city)]
    memset(dis, -1, sizeof dis);
    pq.push({ 0, node });
    dis[compute_hash(node)] = 0;
    par[node] = { "-1" ,transportations() };
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
                pq.push({ -mn, to.first });
                par[to.first] = { city, t };
            }
        }
    }

    return { dis[compute_hash(distination)] ,saveCheapestPath(par, distination) };
}

int Map::getNumberOfEdges() {
    int cnt = 0;
    for (auto i : Map::adjList) {
        cnt += i.second.size();
    }
    return cnt / 2;
}
