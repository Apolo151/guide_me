#include <iostream>

#include "../include/data_manager.h"
#include "../include/map.h"

#include "../include/all_paths.h"
// Set Global Variables
string DATA_PATH = "../data/data.txt";

// initialize static Map members
map<string, vector<Road>> Map::adjList;
list<Route> Map::routes;

int main(int argc, char **argv) 
{
  //setup entities
  // DataManager dataManager = DataManager();
  
  // dataManager.readData(DATA_PATH);
  // dataManager.printAdjList();

  // // shutdown
  // dataManager.saveData(DATA_PATH);

  vector <vector <pair <int, int>>> tmpGraph;
  cout << "Input\n";
  int n, m;
  cin >> n >> m;

  tmpGraph.resize(n + 1);
  for(int i = 0 ; i < m; i++)
  {
      int u, v, w;
      cin >> u >> v >> w;
      tmpGraph[u].push_back({v, w});
      tmpGraph[v].push_back({u, w});
  }

  AllPaths allPaths(tmpGraph, 1, n);
  allPaths.computeAllPaths();
  allPaths.displayAllPaths();


  return 0;
}