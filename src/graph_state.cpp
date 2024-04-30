#include <iostream>

#include "..\include\graph_state.h"
#include "..\include\map.h"



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
  return true;
}
int GraphState::dfs(string startingNode) {
  return 0;
}
