#include "../include/account.h"

Account::Account(string userName, string password) {
  userName = userName;
  password = password;
}

string Account::getName() { return userName; }
string Account::getPassword() { return password; }

void Account::setName(string name) { userName = name; }
void Account::setPassword(string password) { password = password; }

void User::traverseMap() {}

void User::checkState() {}

void Admin::addCity() {}