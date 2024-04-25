#include <map>
#include <string>
#include <vector>

#include "graph.h"

using namespace std;

enum transportations { BUS, MICROBUS, TRAIN, METRO, UBER };

class Map {
  map<string, vector<Road>> adjList;

 public:
  void dfs() {}
  void bfs() {}
};

class Route {
  vector<Road> routes;
};

class Road : Edge {
  City city1, city2;
  int cost;
  transportations transportation;

 public:
  Road(City, City, transportations, int){};
};

class City : Node {
 public:
  City(){};
  City(string){};
  City(City&){};
};