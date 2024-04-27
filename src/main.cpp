#include <iostream>

#include "../include/data_manager.h"
#include "../include/map.h"

map<string, vector<Road>> Map::adjList;

int main(int argc, char **argv) {
  DataManager dataManager = DataManager();
  dataManager.readData();
  dataManager.printAdjList();
  dataManager.saveData();
  return 0;
}