#include "..\include\graph_state.h"

#include <iostream>

#include "..\include\map.h"

Map* GraphState::currentMap = Map::getInstance();

GraphState::~GraphState() {
  delete currentMap;
  currentMap = NULL;
}
bool GraphState::isComplete() {
  int numberOfNodes = currentMap->adjList.size();
  int numberOfEdges = currentMap->routes.size();
  int summationOfNodes = (numberOfNodes * (numberOfNodes - 1)) / 2;
  if (numberOfEdges == summationOfNodes)
    return true;
  else
    return false;
}
bool GraphState::isConnected() {
  return true;
}
int GraphState::dfs(string startingNode) {
  
}
