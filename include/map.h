#pragma once

#include <string>
#include <unordered_map>
#include "map_helpers.h"

using namespace std;

class Map {
 private:
  Map();

 public:
  static unordered_map<string, unordered_map<string, Route>> adjList;
  static void dfs();
  static void bfs();
  static int getNumberOfEdges();
};