#pragma once

#include <queue>
#include <string>
#include <unordered_map>

#include "data_manager.h"
#include "map_helpers.h"
using namespace std;

class Map {

  Map();
 private:
	 static int cnt;
 static int compute_hash(string s);   
 static map<string, int>hash;
 static vector<pair<string, string>> saveCheapestPath(map<string, pair<string, transportations>>, string);
 public:
  static unordered_map<string, unordered_map<string, Route>> adjList;
  static pair<long long, vector<pair<string, string>>> Dijkstra(string start,string destination);
  static void bfs(string start);
  static void printSavedTraverse(queue<string> traverseQueue);
  static int getNumberOfEdges();
};

