#include <iostream>

#include "../include/data_manager.h"
#include "../include/map.h"

// Set Global Variables
string DATA_PATH = "../data/data.txt";

// initialize static Map members
map<string, vector<Road>> Map::adjList;
list<Route> Map::routes;

int main(int argc, char **argv) 
{
  //setup entities
  DataManager dataManager = DataManager();
  
  dataManager.readData(DATA_PATH);
  dataManager.printAdjList();

  // shutdown
  dataManager.saveData(DATA_PATH);
  return 0;
}