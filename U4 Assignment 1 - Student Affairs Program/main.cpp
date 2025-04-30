#include<iostream> 
using namespace std;

//Function Prototypes 
void studentLogin();
void EveOrglogin();

// Function: welcome
// Purpose: Display welcome message and direct users to appropriate login
void welcome()
{
    cout << "Welcome to Student Affairs Departement" << endl;
    cout << "This software is created for event organisers at HRUC" << endl;
    cout << "Are you a student or organiser? [Enter in lowercase]" << endl;
    string choice; //Creating a variable to store user's choice: student/staff
    cin >> choice;
    if (choice == "student") { //student login choice
        studentLogin();
    }
    else if (choice == "organiser") { //staff login choice
        EveOrglogin();
    }
    else {
        cout << "Wrong Choice!" << endl;
    }
}

// Function: main
// Purpose: Program entry point
int main() {
    welcome(); //Calling the welcome function 
    return 0;
}