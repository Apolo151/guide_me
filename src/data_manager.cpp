#include "../include/data_manager.h"

#include <iostream>
#include <map>
#include <unordered_map>

#include "../include/map.h"
#include "../include/map_helpers.h"

using namespace std;

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
      Route route1(c1, c2);
      Route route2(c2, c1);
      // loop through roads and add to adjList
      for (int i = 3; i < wordsList.size(); i += 2) {
        trans = wordsList[i];
        cost = stoi(wordsList[i + 1]);
        RoadProperties roadProperties(cost, strToEnum[trans]);
        route1.addRoad(roadProperties);
        route2.addRoad(roadProperties);
      }
      Map::adjList[c1][c2] = route1;
      Map::adjList[c2][c1] = route2;
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
    unordered_map<string, unordered_map<string, int>> vis;
    int numberOfEdges = Map::getNumberOfEdges();
    fileStream << numberOfEdges;
    for (auto i : Map::adjList) {
      for (auto j : i.second) {
        if (vis[i.first][j.first] == 1) continue;
        vis[i.first][j.first] = 1;
        vis[j.first][i.first] = 1;
        fileStream << '\n' << i.first << " - " << j.first;
        for (auto road : j.second.roads) {
          fileStream << ' ' << enumToStr[road.transport] << ' ' << road.cost;
        }
      }
    }
  } else {
    cerr << "Error opening file to save data\n";
  }
  fileStream.close();
}

void DataManager::printAdjList() {
  unordered_map<string, unordered_map<string, int>> vis;
  for (auto i : Map::adjList) {
    for (auto j : i.second) {
      if (vis[i.first][j.first] == 1) continue;
      vis[i.first][j.first] = 1;
      vis[j.first][i.first] = 1;
      cout << "\n"
           << "From: " << i.first << " To: " << j.first << " AND "
           << "From: " << j.first << " To: " << i.first << "\n"
           << endl;
      for (auto road : j.second.roads) {
        cout << i.first << " - " << j.first << " with "
             << enumToStr[road.transport] << ", costs " << road.cost << endl;
      }
    }
  }
}
