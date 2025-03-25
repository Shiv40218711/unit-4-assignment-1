#include<iostream> 
using namespace std;
//Function Prototypes 

void studentLogin();
void EveOrglogin();

void welcome()
{
	cout << "Welcome to Student Affairs Departement" << endl;
	cout << "This software is created for event organisers at HRUC" << endl;
	cout << "Are you a student or organiser? [Enter in lowercase]" << endl;
	string choice; //Creating a variable to store user's choice: student/staff
	cin >> choice;
	if (choice == "student") {//student login choice
		studentLogin();
	}
	else if (choice == "organiser") {//staff login choice
		EveOrglogin();
	}
	else {
		cout << "Wrong Choice!" << endl;
	}
}

int main() {
	welcome(); //Calling the welcome function 
	return 0;
}
