#pragma once

#include "map_helpers.h"
#include <string>


using namespace std;

class Account {
private:
  string userName;
  string password;

  bool validatePassword(string);

public:
  Account();
  Account(string, string); // signup
  bool greetUser();
  bool signup();
  bool login();
  string getName();
  string getPassword();
  void setName(string);
  void setPassword(string);
};

class User : Account {
public:
  void traverseMap();
  void checkState();
};

class Admin : Account {
public:
  void addRoad(string &city1, string &city2, int cost,
               transportations transportation);
  void updateRoad(string &city1, string &city2, int cost,
                  transportations transportation, int new_cost,
                  transportations new_transportation);
  void deleteRoad(Road road);
  //
  void addCity(string &name);
  void updateCity(string &name, string &new_name);
  void deleteCity(string &name);
};