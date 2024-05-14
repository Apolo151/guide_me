#pragma once

#include <map>
#include <queue>
#include <string>
#include <unordered_map>

#include "data_manager.h"
#include "map_helpers.h"
using namespace std;

class Map {
  Map();

 public:
  static int compute_hash(string s);
  static vector<pair<string, string>> saveCheapestPath(
      map<string, pair<string, transportations>>, string);
  static int cnt;
  static map<string, int> hash;
  static unordered_map<string, unordered_map<string, Route>> adjList;
  static pair<long long, vector<pair<string, string>>> Dijkstra(
      string start, string destination);
  static void bfs(string start);
  static void dfs(string city, unordered_map<string, int> &vis);
  static void printSavedTraverse(queue<string> traverseQueue);
  static int getNumberOfEdges();
};
