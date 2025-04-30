#include <iostream>
using namespace std;

// Function Prototypes
void addevent();
void DisplayEventOrganiserName();
void welcome();

// Function: EveOrgMenu
// Purpose: Placeholder for event organizer menu (currently unused)
void EveOrgMenu() {}

// Function: EveOrglogin
// Purpose: Handle event organizer authentication and menu navigation
void EveOrglogin() {
  string EveOrg_Username, EveOrg_password;
  cout << "Enter your username: ";
  cin >> EveOrg_Username;
  cout << "Enter your password: ";
  cin >> EveOrg_password;

  if (EveOrg_Username == "Daniel" && EveOrg_password == "staff123") {
    cout << "Login Successful!" << endl;
    cout << "\nEnter one of the following:\n"
         << "Add Event (addevent)\n"
         << "Display Organiser Name (orgname)\n\n";

    string choice; // Declare the choice variable
    cin >> choice; // Accept user input

    if (choice == "addevent") {
      addevent(); // Call function
    } else if (choice == "orgname") {
      DisplayEventOrganiserName(); // Call function
    } else {
      cout << "Invalid choice! Please enter a valid option." << endl;
    }
  } else {
    cout << "Login Failed!" << endl;
  }
}

// Function: AddEventOrganiser
// Purpose: Placeholder for adding event organizer functionality
void AddEventOrganiser() {
  cout << "Event Organiser Added Successfully!" << endl;
}

// Function: DisplayEventOrganiserName
// Purpose: Display the organizer's name
void DisplayEventOrganiserName() { cout << "Event Organiser: Daniel" << endl; }