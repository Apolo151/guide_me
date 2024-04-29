#include <iostream>

#include "../include/data_manager.h"
#include "../include/map.h"

// Set Global Variables
string DATA_PATH = "D:\\github\\guide_me\\data\\data.txt";

// initialize static Map members
unordered_map<string, unordered_map<string, Route>> Map::adjList;
// list<Route> Map::routes;

int main(int argc, char **argv) {
  // setup entities
  DataManager dataManager = DataManager();
  dataManager.readData(DATA_PATH);
  //
  dataManager.printAdjList();
  Map::bfs("Cairo","Dahab");
  // shutdown
  dataManager.saveData(DATA_PATH);
  return 0;
}