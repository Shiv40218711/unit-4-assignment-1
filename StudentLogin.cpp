#include <iostream> 
using namespace std;

//Initialise external functions 
void EveOrgMenu();

void studentLogin() {

	string studentUsername, studentPassword;
	cout << endl << "Enter username";
	cin >> studentUsername;
	cout << "Enter Password";
	cin >> studentPassword;

	if (studentUsername == "student50" && studentPassword == "student12345") {
		cout << "Logged In Successfully!" << endl;
		EveOrgMenu;
	}
}