#include <iostream> 
using namespace std;
//Function Prototypes 

void AddEventOrganiser();
void DisplayEventOrganiserName();
void welcome();
void EveOrgMenu() {};

void EveOrglogin() {
    string EveOrg_Username, EveOrg_password;
    cout << "Enter your username:";
    cin >> EveOrg_Username;
    cout << "Enter your password:";
    cin >> EveOrg_password;
    if (EveOrg_Username == "Daniel" && EveOrg_password == "staff123") {
        cout << "Login Successful!" << endl;
        cout << endl << endl << "Enter one of the following:\nAdd Event (addevent)\nDisplay Organiser Name (orgname)" << endl << endl;

        string choice; // Declare the choice variable to store the user's input
        cin >> choice; // Accept user input

        if (choice == "addevent") {
            AddEventOrganiser(); // Call the function to add an event
        }
        else if (choice == "orgname") {
            DisplayEventOrganiserName(); // Call the function to display the organiser name
        }
        else {
            cout << "Invalid choice! Please enter a valid option." << endl;
        }
    }
    else {
        cout << "Login Failed!" << endl;
    }
}
