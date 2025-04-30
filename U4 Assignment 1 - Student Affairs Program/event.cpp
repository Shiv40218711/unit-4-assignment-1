#include <iostream>
#include <string>
#include <vector>
using namespace std;

void welcome();
// Structure: Event
// Purpose: Store event information
struct Event {
  string eventname;
  string eventtime;
  string eventlocation;
  string eventdescription;
  int number_of_avaliable_seats;
  bool applied = false;
};

vector<Event> eventlist; // Global event list storage

// Function: addevent
// Purpose: Add a new event to the system
void addevent() {
  Event x;
  cout << "Enter the name of the Event: ";
  cin >> x.eventname;
  cout << "Enter the Event Time: ";
  cin >> x.eventtime;
  cout << "Enter the name of the Event Location: ";
  cin >> x.eventlocation;
  cout << "Enter the Event Description: ";
  cin >> x.eventdescription;
  cout << "Enter the number of avaliable seats: ";
  cin >> x.number_of_avaliable_seats;
  eventlist.push_back(x);
  welcome();
}

// Function: displayevent
// Purpose: Display all events in the system
void displayevent() {
    if (eventlist.size() < 1) {
        Event x;
        x.eventname = "Shiv";
        x.eventtime = "01/05/2025";
        x.eventlocation = "Shiv House";
        x.eventdescription = "Party Party ya ya";
        x.number_of_avaliable_seats = 10;
        eventlist.push_back(x);

        Event y;
        y.eventname = "Shivu paarty";
        y.eventtime = "01/05/2025";
        y.eventlocation = "Shiv House";
        y.eventdescription = "Party Party ya ya";
        y.number_of_avaliable_seats = 10;
        eventlist.push_back(y);
    }
    for (int i = 0; i < eventlist.size(); i++) {
    cout << "Name: " << eventlist[i].eventname << endl;
    cout << "Time: " << eventlist[i].eventtime << endl;
    cout << "Location: " << eventlist[i].eventlocation << endl;
    cout << "Description: " << eventlist[i].eventdescription << endl;
    cout << "Number of avaliable seats: "
         << eventlist[i].number_of_avaliable_seats << endl << endl;
  }
}

// Function: bookevent
// Purpose: Handle event booking functionality
void bookevent() {
  string searcheventname;
  cout << "Enter the name of the event you want to book: ";
  cin.ignore();
  getline(cin, searcheventname);
  for (int i = 0; i < eventlist.size(); i++) {
    if (searcheventname == eventlist[i].eventname) {
      cout << "You have booked the event " << searcheventname << endl << endl;
      eventlist[i].applied = true;
      welcome();
    }
  }
}

void viewRegisteredEvents() {
  cout << "\n--- YOUR REGISTERED EVENTS ---\n";
  for (int i = 0; i < eventlist.size(); i++) {
    if (eventlist[i].applied) {
      cout << "Name: " << eventlist[i].eventname << endl;
      cout << "Time: " << eventlist[i].eventtime << endl;
      cout << "Location: " << eventlist[i].eventlocation << endl;
      cout << "Description: " << eventlist[i].eventdescription << endl;
      cout << "Number of avaliable seats: "
           << eventlist[i].number_of_avaliable_seats << endl;
      cout << "-------------------------------------" << endl;
      cout << endl;
    } else {
      cout << "You have not registered for any events." << endl;
    }
  }
  welcome();
}