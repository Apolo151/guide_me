#pragma once

#include <string>
#include <unordered_map>
#include "map_helpers.h"
#include "data_manager.h"
using namespace std;

class Map {
  Map();
 private:
 static int compute_hash(string s);   
 public:
  static unordered_map<string, unordered_map<string, Route>> adjList;
  static long long Dijkstra(string start,string destination);
  static void bfs(string start,string destination);
  static int getNumberOfEdges();
};