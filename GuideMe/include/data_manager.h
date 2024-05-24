#pragma once

#include <fstream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

class DataManager {
 public:
  fstream fileStream;
  stringstream stringStream;
  string currLine;
  vector<string> wordsList;
  set<set<string>> cityPairs;
  int linesNo;
  //
  DataManager();
  void readData(string);
  void saveData(string);
  void printAdjList();
};