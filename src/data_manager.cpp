#include "../include/data_manager.h"

#include <iostream>

#include "../include/map.h"

string FILE_PATH = "../data/data.txt";

map<string, transportations> strToEnum = {{"Bus", BUS},
                                          {"Microbus", MICROBUS},
                                          {"Train", TRAIN},
                                          {"Metro", METRO},
                                          {"Uber", UBER}};

DataManager::DataManager() {}

void DataManager::readData() {
  string trans;
  int cost;
  string word;
  fileStream.open(FILE_PATH, ios::in);
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
      // get cities
      string c1 = wordsList[0];
      string c2 = wordsList[2];
      // loop through roads and add to adjList
      for (int i = 3; i < wordsList.size(); i += 2) {
        trans = wordsList[i];
        cost = stoi(wordsList[i + 1]);
        Map::adjList[c1].push_back(Road(c1, c2, strToEnum[trans], cost));
        Map::adjList[c2].push_back(Road(c2, c1, strToEnum[trans], cost));
      }
      // clear data
      wordsList.clear();
      stringStream.clear();
    }
  } else {
    cerr << "Error opening file to read data\n";
  }
  fileStream.close();
}

void DataManager::saveData() {
  fileStream.open("../data/out.txt", ios::in | ios::out);
  if (fileStream.is_open()) {
    for (auto entry : Map::adjList) {
      for (auto road : entry.second) {
        fileStream << road.city1Name << " - " << road.city2Name << ' '
                   << road.transportation << ' ' << road.cost << '\n';
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
      cout << road.city2Name << ", with " << road.transportation
           << " and costs " << road.cost << endl;
    }
  }
}