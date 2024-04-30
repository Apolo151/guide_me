#include "../include/account.h"
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
		}
		else if (x == 2) {
			signup();
		}
		else
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
		cout << "Please enter a valid password,	your password must be at least 6 characters long\n";
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
		}
		else {
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

void Admin::addCity() {}

void Admin::updateCity() {}

void Admin::deleteCity() {}

void Admin::addRoad() {}

void Admin::updateRoad() {}

void Admin::deleteRoad() {}