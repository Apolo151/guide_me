#include "../include/graph_state.h"

#include <iostream>
#include <string>
#include <unordered_map>

#include "../include/map.h"

using namespace std;

bool GraphState::isComplete() {
    int numberOfNodes = Map::adjList.size();
    int numberOfEdges = Map::getNumberOfEdges();
    int summationOfNodes = (numberOfNodes * (numberOfNodes - 1)) / 2;
    if (numberOfEdges == summationOfNodes)
        return true;
    else
        return false;
}
bool GraphState::isConnected() {
    unordered_map<string, int> vis;
    int numberOfNodes = Map::adjList.size();
    dfs(Map::adjList.begin()->first, vis);
    if (vis.size() == numberOfNodes)
        return true;
    else
        return false;
}
void GraphState::dfs(string city, unordered_map<string, int> &vis) {
    if (vis[city] == 1)
        return;
    vis[city] = 1;
    for (auto i : Map::adjList[city]) {
        dfs(i.first, vis);
    }
}
