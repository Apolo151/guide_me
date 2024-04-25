#pragma once

#include <fstream>
#include <map>
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
  int linesNo;
  //
  DataManager();
  void readData();
  void saveData();
  void printAdjList();
};