#include "../include/map_helpers.h"

using namespace std;
// City
City::City() {
    Node();
    name = "";
}
City::City(string name) { name = name; };

City::City(const City& city) { name = city.name; }

string City::getName() const { return name; }
void City::setName(string cityName) { name = cityName; }

// Road
RoadProperties::RoadProperties(int cost, transportations transportation)
    : cost(cost), transport(transportation) {}

RoadProperties::RoadProperties(const RoadProperties& anotherRoadProperties)
    : cost(anotherRoadProperties.cost), transport(anotherRoadProperties.transport) {}

Road::Road(string cName1, string cName2, RoadProperties props)
    : Edge(), city1Name(cName1), city2Name(cName2), props(props) {}

Road::Road(const Road& road)
    : city1Name(road.city1Name), city2Name(road.city2Name), props(road.props) {}

// Route
Route::Route(string city1, string city2) : city1(city1), city2(city2) {}

Route::Route(const Route& route) : city1(route.city1), city2(route.city2), roads(route.roads) {}

void Route::addRoad(RoadProperties roadProperties) { roads.push_back(roadProperties); }
Route::Route() {}