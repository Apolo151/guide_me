#include "../include/map.h"

#include <string>
#include <vector>

using namespace std;

// Map
void Map::bfs() {}

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