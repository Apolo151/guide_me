#include <cassert>
#include <iostream>

#include "../include/account.h"
#include "../include/data_manager.h"
#include "../include/map.h"
#include "../include/map_helpers.h"

using namespace std;

bool Admin::mainMenu(Account *account) {
  Admin *admin = (Admin *)account;

  int choice = 0;
  while (true) {
    cout << "\tAdmin MainMenu\n\n";
    cout << " [1] Display All Roads \n [2] Add Road \n [3] Update Road \n [4] "
            "Delete Road \n [5] Logout "
            "\n [6] Exit \n\n";
    cout << "Go To: ";
    cin >> choice;
    if (choice < 1 || choice > 6) {
      system("cls");
      cout << "Invalid Input ... Please Try Again \n";
    } else {
      if (choice == 1) {
        DataManager data;
        data.printAdjList();
      }
      if (choice == 2) {
        string city1, city2;
        int cost;
        transportations tr;
        selectRoad(city1, city2, cost, tr);
        admin->addRoad(city1, city2, cost, tr);
        system("cls");
      }
      if (choice == 3) {
        string city1, city2;
        int cost, cost2, t;
        transportations tr, tr2;
        selectRoad(city1, city2, cost, tr);
        cout << "Enter the new cost: ";
        cin >> cost2;
        cout << "Enter the new transportation(1 -> BUS, 2 -> MICROBUS, 3 -> "
                "TRAIN, 4 -> METRO, 5 -> UBER): ";
        while (true) {
          cin >> t;
          if (t == 1) tr2 = BUS;
          if (t == 2) tr2 = MICROBUS;
          if (t == 3) tr2 = TRAIN;
          if (t == 4) tr2 = METRO;
          if (t == 5) tr2 = UBER;
          if (t >= 1 && t <= 5) break;
          cout << "Invalid Input \n \n";
        }
        admin->updateRoad(city1, city2, cost, tr, cost2, tr2);
              system("cls");

      }
      if (choice == 4) {
        string city1, city2;
        int cost;
        transportations tr;
        selectRoad(city1, city2, cost, tr);
        admin->deleteRoad(Road(city1, city2, RoadProperties(cost, tr)));
      system("cls");

      }
      if (choice == 5) {
        system("cls");
        return true;
      }
      if (choice == 6) {
        system("cls");
        return false;
      }
    }
    delete admin;
  }

  //   cout << "What do you want to do?\n";
  //   choice = -1;
  //   while (choice != 4) {
  //     cout << "1.Add City	2.Update City	3.Delete City\n";
  //     cin >> choice;
  //     if (choice == 1) {
  //       // user->addCity();
  //     } else if (choice == 2) {
  //       // user->updateCity();
  //     } else if (choice == 3) {
  //       // user->deleteCity();
  //     } else if (choice == 4) {
  //       continue;
  //     } else {
  //       cout << "Invalid Option, Try again...\n";
  //     }
  //     choice = -1;
  //   }
}

void Admin::selectRoad(string &city1, string &city2, int &cost,
                       transportations &tr) {
  int t;

  cout << "Enter The Name Of The City1, City2, Cost, Transportation: \n";
  cout << "City1: ";
  cin >> city1;
  cout << "City2: ";
  cin >> city2;
  cout << "Cost: ";
  cin >> cost;
  cout << "Transportation (1 -> BUS, 2 -> MICROBUS, 3 -> TRAIN, 4 -> METRO, 5 "
          "-> UBER): ";
  while (true) {
    cin >> t;
    if (t == 1) tr = BUS;
    if (t == 2) tr = MICROBUS;
    if (t == 3) tr = TRAIN;
    if (t == 4) tr = METRO;
    if (t == 5) tr = UBER;
    if (t >= 1 && t <= 5) break;
    cout << "Invalid Input \n \n";
  }
}
string Admin::getCityName() {
  string cityName;
  cout << "Enter The Name Of The City: ";
  cin >> cityName;
  return cityName;
}
void Admin::addCity(string &name) {
  // add it as a key
  auto &adjList = Map::adjList;
  adjList[name] = {};
}

void Admin::updateCity(string &name,
                       string &new_name) {  // NOTE: if city doesn't exist, the
                                            // new city will just be added

  // find it, update name, and update name in all connections
  auto &adjList = Map::adjList;

  for (auto [city, connections] : adjList[name]) {  // erase all connections
    auto it = adjList[city].find(name);
    assert(it != adjList[city].end());
    adjList[city].erase(it);

    adjList[city].emplace(new_name, connections);
  }

  auto temp = adjList[name];
  adjList.erase(adjList.find(name));  // erase key
  adjList.emplace(new_name, temp);
}

void Admin::deleteCity(
    string &name) {  // WARNING: city doesn't exist -> runtime error!
  // delete key, delete connections

  auto &adjList = Map::adjList;

  for (auto [city, connections] : adjList[name]) {  // erase all connections
    auto it = adjList[city].find(name);
    assert(it != adjList[city].end());
    adjList[city].erase(it);
  }

  adjList.erase(adjList.find(name));  // erase key
}

void Admin::addRoad(string &city1, string &city2, int cost,
                    transportations transportation) {
  // add it to connections
  auto &adjList = Map::adjList;

  adjList[city1][city2].addRoad(RoadProperties(cost, transportation));
  adjList[city2][city1].addRoad(RoadProperties(cost, transportation));
}

void Admin::updateRoad(string &city1, string &city2, int cost,
                       transportations transportation, int new_cost,
                       transportations new_transportation) {
  // change props
  deleteRoad(Road(city1, city2, RoadProperties(cost, transportation)));
  addRoad(city1, city2, new_cost, new_transportation);
}

void Admin::deleteRoad(
    Road road) {  // WARNING: road doesn't exist -> runtimer error!

  // delete connection
  auto &adjList = Map::adjList;
  auto city1 = road.city1Name;
  auto city2 = road.city2Name;

  adjList[city1][city2].roads.remove(road.props);
  adjList[city2][city1].roads.remove(road.props);

  if (adjList[city1][city2].roads.empty()) {
    adjList[city1].erase(city2);
    adjList[city2].erase(city1);
  }
}
