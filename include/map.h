#pragma once

#include <string>
#include <unordered_map>
#include "map_helpers.h"
#include "data_manager.h"
using namespace std;

class Map {
 private:
  Map();

 public:
  static unordered_map<string, unordered_map<string, Route>> adjList;
  static void dfs();
  static void bfs(string start,string destination);
  static int getNumberOfEdges();
};