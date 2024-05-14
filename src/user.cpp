#include <cassert>
#include <iostream>

#include "../include/account.h"
#include "../include/map.h"

using namespace std;


void User::traverseMap() {
  int option = -1;
  cout << "How do you want to traverse?\n";
  cout << "1.BFS \t 2.DFS";
  cin >> option;
  if (option == 1)
  {
    //Map::bfs();
  }
  else if(option == 2)
  {
    //Map::Dijkstra();
  }


}

void User::checkState() {}

bool User::mainMenu(Account *account) {
  User *user = (User *)account;

  delete user;
  return true;
//   User *user = (User *)&account;
//   cout << "What do you want to do?\n";
//   choice = -1;
//   while (choice != 4) {
//     cout << "1.Traverse Map	2.Check Map State	3.Get best routes "
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