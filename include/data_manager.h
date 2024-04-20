#pragma

#include <fstream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class DataManager {
 public:
  static map<string, string> adjList;
  fstream fileStream;
  string currLine;
  //
  DataManager();
  void readData();
  void saveData();
};