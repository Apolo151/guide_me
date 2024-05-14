#include <cassert>
#include <iostream>

#include "../include/account.h"
#include "../include/all_paths.h"
#include "../include/graph_state.h"
#include "../include/map.h"

using namespace std;

void User::traverseMap() {
  int option = -1;
  cout << "How do you want to traverse?\n";
  cout << "1.BFS \t 2.DFS \n \n";
  cin >> option;
  if (option == 1) {
    string city;
    cout << "Enter the Source: ";
    cin >> city;
    system("cls");
    Map::bfs(city);
  } else if (option == 2) {
    string source, destination;
    cout << "Enter the Source: ";
    cin >> source;
    cout << "Enter the Destination: ";
    cin >> destination;
    AllPaths dfs(Map::adjList,source,destination);
    int budget;
    cout << "Enter Your Budget: ";
    cin >> budget;
    dfs.computeAllPaths(budget);
    dfs.displayAllPaths();
  }
}

void User::checkState() {
  int choice;
  cout << " [1] Check Graph Completion \n [2] Check Graph Connectivity \n \n";
  cin >> choice;
  if (choice == 1) {
    system("cls");
    if (GraphState::isComplete()) {
      cout << "the graph is complete \n \n";
    } else {
      cout << "the graph is not complete \n \n";
    }
  }
  if (choice == 2) {
    system("cls");
    if (GraphState::isConnected()) {
      cout << "the graph is connected \n \n";
    } else {
      cout << "the graph is not connected \n \n";
    }
  }
}

bool User::mainMenu(Account *account) {
  User *user = (User *)account;
  while (true) {
    int choice;
    cout << "\n\n \t User MainMenu\n\n";
    cout << " [1] Traverse Graph \n [2] Check Graph State \n [3] Logout "
            "\n [4] Exit \n\n";
    cout << "Go To: ";
    cin >> choice;
    if (choice == 1) {
      traverseMap();
    }
    if (choice == 2) {
      checkState();
    }
    if (choice == 3) {
      system("cls");
      return true;
    }
    if (choice == 4) {
      system("cls");
      return false;
    }
  }
  delete user;
  //   User *user = (User *)&account;
  //   cout << "What do you want to do?\n";
  //   choice = -1;
  //   while (choice != 4) {
  //     cout << "1.Traverse Map	2.Check Map State	3.Get best
  //     routes "
  //             "4.Close app\n";
  //     cin >> choice;
  //     if (choice == 1) {
  //       user->traverseMap();
  //       // Map::bfs("Cairo", "Dahab");
  //     } else if (choice == 2) {
  //       user->checkState();
  //     } else if (choice == 3) {
  //       // TODO: get sorted paths
  //     } else if (choice == 4)
  //       continue;
  //     else {
  //       cout << "Invalid Option, Try again...\n";
  //     }
  //     choice = -1;
  //   }

  ///////////////////////////////////////////////////////////////////////////////////////

  //   cout << "What do you want to do?\n";
  //   choice = -1;
  //   while (choice != 4) {
  //     cout << "1.Traverse Map	2.Check Map State	3.Get best
  //     routes "
  //             "4.Close app\n";
  //     cin >> choice;
  //     if (choice == 1) {
  //       user->traverseMap();
  //       // Map::bfs("Cairo", "Dahab");
  //     } else if (choice == 2) {
  //       user->checkState();
  //     } else if (choice == 3) {
  //       // TODO: get sorted paths
  //     } else if (choice == 4)
  //       continue;
  //     else {
  //       cout << "Invalid Option, Try again...\n";
  //     }
  //     choice = -1;
  //   }
}