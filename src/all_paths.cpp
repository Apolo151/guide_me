#include "../include/all_paths.h"
#include "../include/map.h"
#include "../include/map_helpers.h"
#include <unordered_map>
#include <map>
#include <string>
#include <vector>

AllPaths::AllPaths(unordered_map<string, unordered_map<string, Route>> &graph, string source, string destination)
{
    this->graph = graph;
    this->source = source;
    this->destination = destination;
}
AllPaths::Path::Path(int weight, vector <string> curPath)
{
    this->cost = weight;
    this->pathVector = curPath;
}
void AllPaths::computeAllPaths()
{
    map <string, bool> curVis;
    curVis[this->source] = true;
    dfsAllPaths(this->source, curVis, {}, 0);
    
    sort(this->allPathsVector.begin(), this->allPathsVector.end());
}
bool AllPaths::Path::operator<(const Path& other) const 
{
        return this->cost < other.cost;
}
void AllPaths::displayAllPaths()
{
    for(int i = 0; i < allPathsVector.size(); i++)
    {
        cout << "Path # " << i + 1 << "\n";
        cout << "The cost is: " << allPathsVector[i].first << '\n';
        cout << "The route:\n";
        for(auto &j : allPathsVector[i].second)
            cout << j;
        cout << '\n';
    }
}
void AllPaths::dfsAllPaths(string node,  map <string, bool> &curVis,vector <string> curPath, int weight)
{    map<transportations, string> enumToStr = {{BUS, "Bus"},
                                          {MICROBUS, "Microbus"},
                                          {TRAIN, "Train"},
                                          {METRO, "Metro"},
                                          {UBER, "Uber"}};
    
    if(node == this->destination)
    {
        this->allPathsVector.push_back({weight, {curPath}});
        return;
    }
    for(auto &it : this->graph[node]) // city, Route
    {
        // moving on unordered map
        //it: city 2, Route
        for(auto &i : it.second.roads)
        {
            if(curVis[it.first])
                continue;
            string tmp = "From " + node + " to " + it.first + " by " + enumToStr[i.transport] + " with cost: " + to_string(i.cost) + " " + "\n";
            curPath.push_back(tmp);
            curVis[it.first] = true;
            dfsAllPaths(it.first, curVis, curPath, weight + i.cost);
            curPath.pop_back();
            curVis[it.first] = false;
        
        }
       
    }
   
}
