#include <iostream>

#include "../include/data_manager.h"
#include "../include/map.h"

// Set Global Variables
string DATA_PATH = "../data/data.txt";
using namespace std;

// initialize static Map members
unordered_map<string, unordered_map<string, Route>> Map::adjList;
// list<Route> Map::routes;

int main(int argc, char **argv) {
  // setup entities
  DataManager dataManager = DataManager();
  dataManager.readData(DATA_PATH);
  //
  Map::bfs("Cairo","Dahab");
  cout<< Map::Dijkstra("Cairo","Dahab");
  dataManager.printAdjList();
  // shutdown
  dataManager.saveData(DATA_PATH);
  return 0;
}