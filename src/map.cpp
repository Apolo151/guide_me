#include "../include/map.h"

#include <string>
#include <vector>

using namespace std;

void Map::bfs() {}

void Map::dfs() {}

City::City() { name = ""; }
City::City(string name) { name = name; };

City::City(const City& city) { name = city.name; }

string City::getName() const { return name; }
void City::setName(string cityName) { name = cityName; }

Road::Road(string cName1, string cName2, transportations trans, int cost)
    : city1Name(cName1), city2Name(cName2), transportation(trans), cost(cost) {}

Road::Road(const Road& road) {
  city1Name = road.city1Name;
  city2Name = road.city2Name;
  transportation = road.transportation;
  cost = road.cost;
}