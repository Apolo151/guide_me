#pragma once

#include <string>

#include "map_helpers.h"

using namespace std;

class Account {
   public:
    virtual bool mainMenu(Account *) = 0;
};

class User : public Account {
   public:
    void traverseMap();
    void checkState();
    bool mainMenu(Account *);
};

class Admin : public Account {
   public:
    string getCityName();
    void selectRoad(string &, string &, int &, transportations &);

    bool mainMenu(Account *);

    void addRoad(string &city1, string &city2, int cost, transportations transportation);
    void updateRoad(string &city1, string &city2, int cost, transportations transportation,
                    int new_cost, transportations new_transportation);
    void deleteRoad(Road road);
    //
    void addCity(string &name);
    void updateCity(string &name, string &new_name);
    void deleteCity(string &name);
};