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
    static int compute_hash(string s);

   public:
    static unordered_map<string, unordered_map<string, Route>> adjList;
    static long long Dijkstra(string start, string destination);
    static void bfs(string start);
    static void printSavedTraverse(queue<string> traverseQueue);
    static int getNumberOfEdges();
};