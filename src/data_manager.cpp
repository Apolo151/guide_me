#include "../include/data_manager.h"

#include <iostream>

#include "../include/map.h"

map<string, transportations> strToEnum = {{"Bus", BUS},
                                          {"Microbus", MICROBUS},
                                          {"Train", TRAIN},
                                          {"Metro", METRO},
                                          {"Uber", UBER}};

map<transportations, string> enumToStr = {{BUS, "Bus"},
                                          {MICROBUS, "Microbus"},
                                          {TRAIN, "Train"},
                                          {METRO, "Metro"},
                                          {UBER, "Uber"}};

DataManager::DataManager() {}

void DataManager::readData(string filePath) {
  string trans;
  int cost;
  string word;
  fileStream.open(filePath, ios::in);
  if (fileStream.is_open()) {
    getline(fileStream, currLine);
    linesNo = stoi(currLine);
    // go through each line
    while (getline(fileStream, currLine)) {
      stringStream.str(currLine);
      // cut line into list of words
      while (getline(stringStream, word, ' ')) {
        wordsList.push_back(word);
      }
      // get cities & add to cities
      string c1 = wordsList[0];
      string c2 = wordsList[2];
      cityPairs.insert(set<string>({c1, c2}));
      Route route(c1, c2);
      // loop through roads and add to adjList
      for (int i = 3; i < wordsList.size(); i += 2) {
        trans = wordsList[i];
        cost = stoi(wordsList[i + 1]);
        RoadProps roadProps(cost, strToEnum[trans]);
        route.addRoad(roadProps);
        //
        Map::adjList[c1].push_back(Road(c1, c2, roadProps));
        Map::adjList[c2].push_back(Road(c2, c1, roadProps));
      }
      // add route
      Map::routes.push_back(route);
      // clear data
      wordsList.clear();
      stringStream.clear();
    }
  } else {
    cerr << "Error opening file to read data\n";
  }
  fileStream.close();
}

void DataManager::saveData(string filePath) {
  fileStream.open(filePath, ios::out);
  if (fileStream.is_open()) {
    fileStream << Map::routes.size();
    for (auto route : Map::routes) {
      fileStream << '\n' << route.city1 << " - " << route.city2;
      cityPairs.erase(cityPairs.find(set<string>({route.city1, route.city2})));
      for (auto road : route.roads) {
        fileStream << ' ' << enumToStr[road.transport] << ' ' << road.cost;
      }
    }
  } else {
    cerr << "Error opening file to save data\n";
  }
  fileStream.close();
}

void DataManager::printAdjList() {
  for (auto pr : Map::adjList) {
    cout << "City: " << pr.first << endl;
    for (auto road : pr.second) {
      cout << road.city1Name << " - " << road.city2Name << " with "
           << enumToStr[road.props.transport] << ", costs " << road.props.cost
           << endl;
    }
  }
}