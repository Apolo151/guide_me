#include <cassert>
#include <iostream>

#include "include/account.h"
#include "include/all_paths.h"
#include "include/graph_state.h"
#include "include/map.h"

using namespace std;

void User::traverseMap() {
   
}

void User::checkState() {
    int choice;
    cout << " [1] Check Graph Completion \n [2] Check Graph Connectivity \n \n";
    cin >> choice;
    if (choice == 1) {
        system("cls");
        if (GraphState::isComplete()) {
            cout << "The graph is complete \n \n";
        }
        else {
            cout << "The graph is not complete \n \n";
        }
    }
    if (choice == 2) {
        system("cls");
        if (GraphState::isConnected()) {
            cout << "The graph is connected \n \n";
        }
        else {
            cout << "The graph is not connected \n \n";
        }
    }
}

void User::getOptions() {
    string source, destination;
    cout << "Enter the source city: ";
    cin >> source;
    cout << "Enter the destination city: ";
    cin >> destination;
    AllPaths dfs(Map::adjList, source, destination);
    int budget;
    cout << "Enter Your Budget: ";
    cin >> budget;
    cout << "\n\t Paths \n";
    dfs.computeAllPaths(budget);
    dfs.displayAllPaths();
}

bool User::mainMenu(Account* account) {
    User* user = (User*)account;
    while (true) {
        int choice;
        cout << "\n\n \t User MainMenu\n\n";
        cout << " [1] Traverse Graph \n [2] Check Graph State \n [3] Get Route Options"
            "\n [4] Logout \n [5] Exit \n\n";
        cout << "Go To: ";
        cin >> choice;
        if (choice == 1) {
            break;
            traverseMap();
        }
        if (choice == 2) {
            checkState();
        }
        if (choice == 3) {
            break;
            getOptions();
        }
        if (choice == 4) {
            system("cls");
            return true;
        }
        if (choice == 5) {
            system("cls");
            return false;
        }
    }
    delete user;
}