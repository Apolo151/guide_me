#include "../include/all_paths.h"
#include <bits/stdc++.h>

AllPaths::AllPaths(vector <vector <pair <int, int>>> graph, int source, int destination)
{
    this->graph = graph;
    this->source = source;
    this->destination = destination;
}
AllPaths::Path::Path(int weight, vector <int> curPath)
{
    this->cost = weight;
    this->pathVector = curPath;
}
void AllPaths::computeAllPaths()
{
    dfsAllPaths(this->source, {}, 0);
}

void AllPaths::displayAllPaths()
{
    for(int i = 0; i < allPathsVector.size(); i++)
    {
        cout << "Path # " << i + 1 << "\n";
        cout << "The cost is: " << allPathsVector[i].cost << '\n';
        cout << "The route:\n";
        for(auto &j : allPathsVector[i].pathVector)
            cout << j << ' ';
        cout << '\n';
    }
}
void AllPaths::dfsAllPaths(int node, vector <int> curPath, int weight)
{
    if(node == this->destination)
    {
        this->allPathsVector.push_back(Path({weight, curPath}));
    }
    for(auto &child : this->graph[node])
    {
        if(find(curPath.begin(), curPath.end(), child.first) == curPath.end())
        {
            curPath.push_back(child.first);
            dfsAllPaths(child.first, curPath, weight + child.second);
            curPath.pop_back();
        }
    }
}