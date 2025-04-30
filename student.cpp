#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Forward declarations
void displayevent();
void bookevent();
void welcome();
void viewRegisteredEvents();

// Function: studentLogin
// Purpose: Handle student authentication and display student menu
void studentLogin() {
  string studentUsername, studentPassword;
  cout << endl << "Enter username: ";
  cin >> studentUsername;
  cout << "Enter Password: ";
  cin >> studentPassword;

  if (studentUsername == "student50" && studentPassword == "student12345") {
    cout << "Logged In Successfully!" << endl;

    // Student Menu System
    while (true) {
      cout << "\n========== STUDENT MENU ==========\n";
      cout << "1. View All Upcoming Events\n";
      cout << "2. Register for an Event\n";
      cout << "3. View My Registered Events\n";
      cout << "4. Logout\n";
      cout << "==================================\n";
      cout << "Enter your choice (1-4): ";

      int choice;
      cin >> choice;

      switch (choice) {
      case 1:
        displayevent();
        break;
      case 2:
        bookevent();
        break;
      case 3:
        viewRegisteredEvents();
        break;
      case 4:
        cout << "Logging out...\n";
        welcome();
      default:
        cout << "Invalid choice! Please enter a number between 1-4.\n";
      }
    }
  } else {
    cout << "Login Failed! Invalid credentials.\n";
  }
}

// Function: displayEvents
// Purpose: Display all available events
void displayEvents() {
  cout << "\n--- UPCOMING EVENTS ---\n";
  // This would connect to your events database
  // For now, just showing sample events
  cout << "1. Workshop: Python Programming (10/15/2025)\n";
  cout << "2. Cultural Festival: Diwali Celebration (10/20/202)5\n";
  cout << "3. Sports: Basketball Tournament (11/05/2023)\n";
  cout << "4. Hackathon: 24-Hour Coding Challenge (11/15/2025)\n";
  cout << "5. Charity: Food Drive (12/01/2025)\n";
}

// Function: registerForEvent
// Purpose: Handle event registration for students


// Function: viewRegisteredEvents
// Purpose: Show events the student has registered for
