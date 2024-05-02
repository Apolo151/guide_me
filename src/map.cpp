#include "../include/map.h"
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <iostream>
#include <map>
#include <cstring>
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
int Map::compute_hash(string s)
{
    long long ret=0, pw = 1;
    int i = 1;
    const int mod = 1e3, p =31;
    for (auto c : s)
    {
        if(c>='a' && c<='z'){
        ret = ( (ret%mod ) +  ( (pw%mod )* (c - 'a' + 1)%mod )%mod )%mod;
        pw = ((pw*mod)*(p%mod))%mod;
        }else{
        ret = ( (ret%mod ) +  ( (pw%mod )* (c - 'A' + 1)%mod )%mod )%mod;
        pw = ((pw*mod)*(p%mod))%mod;
        }
    }
    return ret;
}
long long Map::Dijkstra(string node,string distination){
    cout<< "ya rab\n";
priority_queue<pair<long long,string> >pq; // < -cost , city >   
map<string,pair<string,transportations> > par;
long long dis[int(1e3)]; // [hash(city)] 
memset(dis,0x3fffff,sizeof dis);
pq.push({0,node});
dis[compute_hash(node)] = 0;
while(!pq.empty()){
   long long cost;string city ;  
   tie(cost,city) =pq.top();
   cost *=-1; 
   pq.pop();
    for(auto to : adjList[city]){
         
        int hash = compute_hash(to.first);
        long long mn = (dis[hash] == -1 ? 100000 : dis[hash] );
        transportations t;
       for(auto r : to.second.roads){
           if(cost + r.cost < mn ){
               mn = cost + r.cost;
               t = r.transport;
           }
       }
       if(dis[hash] == -1 || mn < dis[hash]){
        dis[hash] = mn;
        pq.push({-mn , to.first});
        par[to.first] = {city,t};
       }

    }
 }
 return dis[compute_hash(distination)];
}
int Map::getNumberOfEdges()
{
  int cnt = 0;
  for(auto i:Map::adjList)
  {
    cnt += i.second.size();
  }
  return cnt/2;
}