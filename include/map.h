#pragma once

#include <map>
#include <string>
#include <vector>

#include "graph.h"

using namespace std;

enum transportations { BUS, MICROBUS, TRAIN, METRO, UBER };

class City : Node {
 public:
  City();
  City(string);
  City(const City&);
  string getName() const;
  void setName(string);
};

class Road : Edge {
 public:
  string city1Name, city2Name;
  int cost;
  transportations transportation;
  Road();
  Road(string, string, transportations, int);
  Road(const Road&);
};

class Map {
  Map();
  static Map* instancePtr;

 public:
  static map<string, vector<Road>> adjList;

  static Map* getInstance() {
    if (instancePtr == NULL) {
      instancePtr = new Map();
      return instancePtr;
    }

    else {
      return instancePtr;
    }
  }
  void dfs();
  void bfs();
};