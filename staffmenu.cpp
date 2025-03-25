#include <iostream>
using namespace std;

void AddEventOrganiser();
void DisplayEventOrganiserName();
void welcome();

void staffmenu() {
	cout << "Welcome to Staff Menu" << endl;
	cout << "The options are as follows:" << endl;
	cout << "1. Add Event Organiser " << endl;
	cout << "2. View Event Organiser Name" << endl;
	cout << "3. Exit from Staff Menu" << endl;
	cout << "Enter an option";
	int option;
	cin >> option;
	switch (option) {
	case 1: AddEventOrganiser(); staffmenu();
	case 2: DisplayEventOrganiserName(); staffmenu();
	case 3: welcome();
	default: cout << "Invalid option!" << endl; staffmenu();
	}
}