#pragma once

#include <string>

using namespace std;

class Account {
 private:
  string userName;
  string password;

  bool validatePassword(string);

 public:
  Account();
  Account(string, string);  // signup
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
  void addRoad();
  void updateRoad();
  void deleteRoad();
  //
  void addCity();
  void updateCity();
  void deleteCity();
};