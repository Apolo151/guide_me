#include "../include/work_flow.h"

#include <iostream>

#include "../include/account.h"
#include "../include/data_manager.h"

using namespace std;

WorkFlow::WorkFlow(){}
void WorkFlow::work() {
  loadData();
  mainFlow();
  uploadData();
}

void WorkFlow::mainFlow() {
    system("cls");
  Account* account;
  while (true){
    if (login() == 1) {
      account = new User();
    } else {
      account = new Admin();
    }
    if(!account->mainMenu(account)) return;
  }
}

int WorkFlow::login() {
  cout << "\tHello, There...\n\n";

  string userName;
  string password;

  while (true) {
    cout << "Enter your username: ";
    cin >> userName;
    cout << "Enter your password: ";
    cin >> password;

    if (userName == "user" && password == "user") {
      system("cls");
      cout << "Login Successful!! .... Welcome User\n";
      return 1;
    } else if (userName == "admin" && password == "admin") {
      system("cls");
      cout << "Login Successful!! .... Welcome Admin\n";
      return 2;
    } else {
      system("cls");
      cout << "Invalid data, Try again...\n";
    }
  }
}

void WorkFlow::loadData() {
  string DATA_PATH = "../data/data.txt";
  DataManager dataManager = DataManager();
  dataManager.readData(DATA_PATH);
}
void WorkFlow::uploadData() {
  string DATA_PATH = "../data/data.txt";
  DataManager dataManager = DataManager();
  dataManager.saveData(DATA_PATH);
}
