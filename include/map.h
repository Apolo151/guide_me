#pragma once

#include <list>
#include <map>
#include <string>
#include <vector>

using namespace std;

#include "map_helpers.h"

class Map {
 private:
  Map();

 public:
  static map<string, vector<Road>> adjList;  // TODO: refactor to use routes
  static list<Route> routes;                 // TODO: refactor to use HashMap

  void dfs();
  void bfs();
};