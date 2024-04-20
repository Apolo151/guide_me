#include <iostream>

#include "../include/data_manager.h"

int main(int argc, char **argv) {
  DataManager dataManager = DataManager();
  dataManager.readData();
  return 0;
}