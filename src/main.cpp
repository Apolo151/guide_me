#include <iostream>

#include "../include/data_manager.h"
#include "../include/map.h"

map<string, vector<Road>> Map::adjList;

string DATA_PATH = "../data/data.txt";

int main(int argc, char **argv) {
  DataManager dataManager = DataManager();
  dataManager.readData(DATA_PATH);
  dataManager.printAdjList();
  dataManager.saveData("../data/out.txt");
  return 0;
}