#include "../include/map.h"
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <iostream>
#include <map>
using namespace std;
// Map
// i dont know where to put the visited array
void Map::bfs(string start,string destination) {
    map<string,bool>visited;
    map<string,string>parent;
    visited[start]=true;
    queue<string>q;
    q.push(start);
    parent[start]="-1";
    parent[destination]="-1";// in case there is no way from start to destination
    while(!q.empty()){
        string this_city_name;
        this_city_name=q.front();
        q.pop();
        for(auto to : adjList[this_city_name]){
            if(!visited[to.first]){
                visited[to.first]=true;
                q.push(to.first);
                parent[to.first]=this_city_name;
            }
        }
    }
    stack<string> path;
    for(string child = destination;child!="-1";child=parent[child]){
        path.push(child);
    }
    if(parent[destination]=="-1"){
        cout << "There is no way to get from " << start << " to " << destination << endl;
        return;
    }
    string transportNames[]={"Bus","Microbus","Train","Metro","Uber"};
    string cityfrom=path.top();
    path.pop();
    while(!path.empty()){
        string cityto = path.top();
        path.pop();
        cout << " From "<< cityfrom << " to " << cityto << " you can take: " << endl; 
        for(auto roads : adjList[cityfrom][cityto].roads){
            cout << transportNames[roads.transport] << " for " << roads.cost << " pounds " << endl;
        }
        if(!path.empty())
        cout << "then\n";
        cityfrom=cityto;
    }
}

void Map::dfs() {}

int Map::getNumberOfEdges()
{
  int cnt = 0;
  for(auto i:Map::adjList)
  {
    cnt += i.second.size();
  }
  return cnt/2;
}