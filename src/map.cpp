#include "../include/map.h"

#include <string>
#include <vector>

using namespace std;

void Map::bfs() {}

void Map::dfs() {}

City::City(string name) { name = name; };

City::City(City& city) { name = city.name; }

Road::Road(City c1, City c2, transportations trans, int cost) {
  city1 = c1;
  city2 = c2;
  cost = cost;
  transportation = trans;
};