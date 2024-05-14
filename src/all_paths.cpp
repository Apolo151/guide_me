#include "../include/all_paths.h"

#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <vector>

#include "../include/map.h"
#include "../include/map_helpers.h"

AllPaths::AllPaths(unordered_map<string, unordered_map<string, Route>> &graph,
                   string source, string destination) {
  this->graph = graph;
  this->source = source;
  this->destination = destination;
}

AllPaths::Path::Path(int weight, vector<vector<string>> curPath) {
  this->cost = weight;
  this->pathVector = curPath;
}

void AllPaths::computeAllPaths(int budget) {
  map<string, bool> curVis;
  curVis[this->source] = true;
  dfsAllPaths(this->source, curVis, {}, 0, budget);

  sort(this->allPathsVector.begin(), this->allPathsVector.end());
}

bool AllPaths::Path::operator<(const Path &other) const {
  return this->cost < other.cost;
}

void AllPaths::displayAllPaths() {
  for (int i = 0; i < allPathsVector.size(); i++) {
    cout << "Path # " << i + 1 << "\n";
    cout << "The cost is: " << allPathsVector[i].first << '\n';
    cout << "The route:\n";
    for (auto &j : allPathsVector[i].second) {
      cout << j[0] << ' ' << j[1] << ' ' << j[2] << ' ' << j[3] << '\n';
    }
    cout << '\n';
  }
}

void AllPaths::dfsAllPaths(string node, map<string, bool> &curVis,
                           vector<vector<string>> curPath, int weight,
                           int &money) {
  map<transportations, string> enumToStr = {{BUS, "Bus"},
                                            {MICROBUS, "Microbus"},
                                            {TRAIN, "Train"},
                                            {METRO, "Metro"},
                                            {UBER, "Uber"}};

  if (node == this->destination) {
    if (weight <= money) this->allPathsVector.push_back({weight, {curPath}});
    return;
  }
  for (auto &it : this->graph[node])  // city, Route
  {
    // moving on unordered map
    // it: city 2, Route
    for (auto &i : it.second.roads) {
      if (curVis[it.first]) continue;
      ;

      vector<string> v;
      v.push_back(node);
      v.push_back(it.first);
      v.push_back(enumToStr[i.transport]);
      v.push_back(to_string(i.cost));
      curPath.push_back(v);
      curVis[it.first] = true;
      dfsAllPaths(it.first, curVis, curPath, weight + i.cost, money);
      curPath.pop_back();
      curVis[it.first] = false;
    }
  }
}