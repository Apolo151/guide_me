#include <iostream>

#include "../include/data_manager.h"
#include "../include/map.h"
#include "../include/account.h"

// Set Global Variables
string DATA_PATH = "../../../data/data.txt";
string ADMIN_NAME = "admin";
string ADMIN_PASSWORD = "adminAdmin";

// initialize static Map members
unordered_map<string, unordered_map<string, Route>> Map::adjList;
// list<Route> Map::routes;

int main(int argc, char **argv) {
  // setup entities
  DataManager dataManager = DataManager();
  dataManager.readData(DATA_PATH);
  Account account;
  // Greet User
  bool greetingState = account.greetUser();
  if (!greetingState) return 0;
  // cast to user or admin according to data
  bool isAdmin = false;
  if (account.getName() == ADMIN_NAME && account.getPassword() == ADMIN_PASSWORD)
	  isAdmin = true;
  //
  if (isAdmin) {
	  Admin* user = (Admin*)&account;
	  cout << "What do you want to do?\n";
	  cout << "1.Add City	2.Update City	3.Delete City";
	  // TODO: add handling logic
  }
  else {
	  User* user = (User*)&account;
	  int choice=-1;
	  cout << "What do you want to do?\n";
	  while (choice != 1 && choice != 2) {
		  cout << "1.Traverse Map	2.Check Map State	3.Close app\n";
		  cin >> choice;
		  if (choice == 1) {
			  choice = -1;
			  user->traverseMap();
		  }

		  else if (choice == 2) {
			  choice = -1;
			  user->checkState();
		  }
		  else if (choice == 3)
			  break;
		  else
			  cout << "Invalid Option, Try again...\n";
	  }
	  cout << "See ya later...\n";
  }
  
  dataManager.printAdjList();

  // shutdown
  dataManager.saveData(DATA_PATH);
  return 0;
}