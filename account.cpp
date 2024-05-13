#include "account.h"
#include "map.h"
#include <cassert>
#include <iostream>

Account::Account() {
    userName = "";
    password = "";
}

Account::Account(string userName, string password) {
    userName = userName;
    password = password;
}

bool Account::validatePassword(string pass) {
    if (pass.size() < 6)
        return false;
    // TOOD: Add more validation
    return true;
}

bool Account::greetUser() {
    int x = 9;
    cout << "Hello, There...\n";
    cout << "What do you want to do?\n";
    while (x != 1 && x != 2) {
        cout << "1.Login	2.signup\n";
        cin >> x;
        if (x == 1) {
            login();
        } else if (x == 2) {
            signup();
        } else
            cout << "Invalid option, Try again...\n";
    }
    return true;
}

bool Account::signup() {
    string userName, password = "77";
    cout << "Enter your wanted username:\n";
    cin >> userName;
    cout << '\n';
    cout << "Enter your wanted password:\n";
    cin >> password;
    while (!validatePassword(password)) {
        cout << "Please enter a valid password,	your password must be at least "
                "6 characters long\n";
        cin >> password;
    }
    cout << "Signup Successful!!\n";
    this->setName(userName);
    this->setPassword(password);
    login();
    return true;
}

bool Account::login() {
    string userName, password;
    bool done = false;
    while (!done) {
        cout << "Enter your username:\n";
        cin >> userName;
        cout << "Enter your password:\n";
        cin >> password;
        // TODO: add searching in users data
        cout << this->getName() << " " << this->getPassword() << '\n';
        if (userName == this->getName() && password == this->getPassword()) {
            cout << "Login Successful!!\n";
            done = true;
        } else {
            cout << "Invalid data, Try again...\n";
        }
    }
    return true;
}

string Account::getName() { return userName; }
string Account::getPassword() { return password; }

void Account::setName(string name) { userName = name; }
void Account::setPassword(string password) { this->password = password; }

void User::traverseMap() {
    int option = -1;
    cout << "How do you want to traverse?\n";
    cout << "1.BFS	2.DFS";
    cin >> option;
}

void User::checkState() {}

void Admin::addCity(string &name) {
    // add it as a key
    auto &adjList = Map::adjList;
    adjList[name] = {};
}

void Admin::updateCity(string &name, string &new_name) {  // NOTE: if city doesn't exist, the new city will just be added

    // find it, update name, and update name in all connections
    auto &adjList = Map::adjList;

    for (auto [city, connections] : adjList[name]) { // erase all connections
        auto it = adjList[city].find(name);
        assert(it != adjList[city].end());
        adjList[city].erase(it);

        adjList[city].emplace(new_name, connections);
    }

    auto temp = adjList[name];
    adjList.erase(adjList.find(name)); // erase key
    adjList.emplace(new_name, temp);
}

void Admin::deleteCity(string &name) {  // WARNING: city doesn't exist -> runtime error!
    // delete key, delete connections

    auto &adjList = Map::adjList;

    for (auto [city, connections] : adjList[name]) { // erase all connections
        auto it = adjList[city].find(name);
        assert(it != adjList[city].end());
        adjList[city].erase(it);
    }

    adjList.erase(adjList.find(name)); // erase key
}

void Admin::addRoad(string &city1, string &city2, int cost,
                    transportations transportation) {
    // add it to connections
    auto &adjList = Map::adjList;

    adjList[city1][city2].addRoad(RoadProperties(cost, transportation));
    adjList[city2][city1].addRoad(RoadProperties(cost, transportation));
}

void Admin::updateRoad(string &city1, string &city2, int cost, transportations transportation, int new_cost,
                       transportations new_transportation) {
    // change props
    deleteRoad(Road(city1, city2, RoadProperties(cost, transportation)));
    addRoad(city1, city2, new_cost, new_transportation);
}

void Admin::deleteRoad(Road road) { // WARNING: road doesn't exist -> runtimer error!

    // delete connection
    auto &adjList = Map::adjList;
    auto city1 = road.city1Name;
    auto city2 = road.city2Name;

    adjList[city1][city2].roads.remove(road.props);
    adjList[city2][city1].roads.remove(road.props);

    if (adjList[city1][city2].roads.empty()) {
        adjList[city1].erase(city2);
        adjList[city2].erase(city1);
    }
}
