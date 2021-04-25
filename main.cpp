#include <iostream>
#include <unistd.h>
#include "StockProfile.h"
using namespace std;

int main() {
	int choice, pan;
	string name;
	StockProfile* sp;
	cout << "***************** Stock Market 101 ***************** " << endl;
	
	cout << "Create your new account(0) / login into your account(1): ";
	cin >> choice;
	// create or login account to the user
	if (choice == 1) { // login
		cout << "Enter your name: ";
		cin >> name;
		cout << "Enter your Personal account number: ";
		cin >> pan;
		sp = new StockProfile(name, pan);
	}
	else if (choice == 0) { // create a new account
		cout << "Enter your name: ";
		cin >> name;
		sp = new StockProfile(name);
	}
	else {
		cout << "Invalid choice! Please try later with correct option...";
		exit(1);
	}
	
	// Regular Menu
	while (true) {
		system("clear");
		cout << "**************************************************************" << endl;
		cout << "Hello Mr|Mrs. " << sp->getName() << ", Personal Account Number: " << sp->getPAN() << endl;
