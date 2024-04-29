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

class RoadProperties {
 public:
  int cost;
  transportations transport;
  //
  RoadProperties(int, transportations);
  RoadProperties(const RoadProperties&);
};

class Road : Edge {
 public:
  string city1Name, city2Name;
  RoadProperties props;
  Road();
  Road(string, string, RoadProperties);
  Road(const Road&);
};

/* contains list of all roads between city1 and city 2 */
class Route {
 public:
  string city1;
  string city2;
  list<RoadProperties> roads;
  //
  Route(string, string);
  Route(const Route&);
  //
  void addRoad(RoadProperties);
};