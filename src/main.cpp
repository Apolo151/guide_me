#include <iostream>
#include <map>

#include "../include/work_flow.h"
#include "../include/account.h"
#include "../include/all_paths.h"
#include "../include/data_manager.h"
#include "../include/map.h"

// Set Global Variables
string DATA_PATH = "../../../data/data.txt";
string ADMIN_NAME = "admin";
string ADMIN_PASSWORD = "adminAdmin";
using namespace std;
int Map::cnt = 0;
map<string, int>Map::hash;
// initialize static Map members
unordered_map<string, unordered_map<string, Route>> Map::adjList;
// list<Route> Map::routes;

int main(int argc, char **argv) {  

    WorkFlow workFlow;
    workFlow.work();
    // // setup entities
    // DataManager dataManager = DataManager();
    // dataManager.readData(DATA_PATH);
    // Account account;
    // // Greet User
    // bool greetingState = account.greetUser();
    // if (!greetingState)
    //     return 0;
    // // cast to user or admin according to data
    // bool isAdmin = false;
    // if (account.getName() == ADMIN_NAME && account.getPassword() == ADMIN_PASSWORD) {
    //     isAdmin = true;
    // }
    // // variable to handle cases
    // int choice = -1;
    // if (isAdmin) {
    //     Admin *user = (Admin *)&account;
    //     cout << "What do you want to do?\n";
    //     choice = -1;
    //     while (choice != 4) {
    //         cout << "1.Add City	2.Update City	3.Delete City\n";
    //         cin >> choice;
    //         if (choice == 1) {
    //             // user->addCity();
    //         } else if (choice == 2) {
    //             // user->updateCity();
    //         } else if (choice == 3) {
    //             // user->deleteCity();
    //         } else if (choice == 4) {
    //             continue;
    //         } else {
    //             cout << "Invalid Option, Try again...\n";
    //         }
    //         choice = -1;
    //     }

    // } else {
    //     User *user = (User *)&account;
    //     cout << "What do you want to do?\n";
    //     choice = -1;
    //     while (choice != 4) {
    //         cout << "1.Traverse Map	2.Check Map State	3.Get best routes "
    //                 "4.Close app\n";
    //         cin >> choice;
    //         if (choice == 1) {
    //             user->traverseMap();
    //             // Map::bfs("Cairo", "Dahab");
    //         } else if (choice == 2) {
    //             user->checkState();
    //         } else if (choice == 3) {
    //             // TODO: get sorted paths
    //         } else if (choice == 4)
    //             continue;
    //         else {
    //             cout << "Invalid Option, Try again...\n";
    //         }
    //         choice = -1;
    //     }
    // }
    // cout << "See ya later...\n";
    // /*
    // cout << Map::Dijkstra("Cairo", "Dahab");
    // dataManager.printAdjList();
    // Admin *user = (Admin *)&account;
    // string name1 = "ccccc";
    // user->addCity(name1);
    // string name2 = "bbbbb";
    // user->addCity(name2);

    // dataManager.printAdjList();
    // cout << "\n\n\n\n\n";

    // user->addRoad(name1, name2, 50, BUS);

    // dataManager.printAdjList();
    // cout << "\n\n\n\n\n";

    // //   user->deleteCity(name1);
    // //   user->deleteCity(name2);
    // user->deleteRoad(Road(name1, name2, RoadProperties(50, BUS)));

    // dataManager.printAdjList();
    // AllPaths allPaths(Map::adjList, "Cairo", "Dahab");
    // allPaths.computeAllPaths();
    // allPaths.displayAllPaths();
    // // user->deleteRoad()
    // //  shutdown
    // */
    // dataManager.saveData(DATA_PATH);
    return 0;
}