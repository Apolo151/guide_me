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
    cout << "Your choice: ";
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
        AllPaths dfs(Map::adjList, source, destination);
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
            cout << "The graph is complete \n \n";
        } else {
            cout << "The graph is not complete \n \n";
        }
    }
    if (choice == 2) {
        system("cls");
        if (GraphState::isConnected()) {
            cout << "The graph is connected \n \n";
        } else {
            cout << "The graph is not connected \n \n";
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
}