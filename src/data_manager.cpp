#include "../include/data_manager.h"

#include <iostream>
DataManager::DataManager() {}

void DataManager::readData() {
  fileStream.open("../data.txt");
  if (fileStream.is_open()) {
    while (getline(fileStream, currLine)) {
      // Cut line
      std::cout << currLine;
    }
  }
  fileStream.close();
}

void DataManager::saveData() {}