#pragma once

#include <list>
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

class RoadProps {
 public:
  int cost;
  transportations transport;
  //
  RoadProps(int, transportations);
  RoadProps(const RoadProps&);
};

class Road : Edge {
 public:
  string city1Name, city2Name;
  RoadProps props;
  Road();
  Road(string, string, RoadProps);
  Road(const Road&);
};

/* contains list of all roads between city1 and city 2 */
class Route {
 public:
  string city1;
  string city2;
  list<RoadProps> roads;
  //
  Route(string, string);
  void addRoad(RoadProps);
};

class Map {
  Map();
  static Map* instancePtr;

 public:
  static map<string, vector<Road>> adjList;
  static list<Route> routes;

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