#include<iostream> 
#include<vector> 
using namespace std; 

struct Event {
	string eventname;
	string eventtime;
	string eventlocation;
	string eventdescription;
	int number_of_avaliable_seats;
}; 
vector<Event>eventlist; 

void addevent() {
	Event x;
	cout << "Enter the name of the Event";
	cin >> x.eventname;
	cout << "Enter the Event Time";
	cin >> x.eventtime;
	cout << "Enter the name of the Event Location";
	cin >> x.eventlocation;
	cout << "Enter the Event Description";
	cin >> x.eventdescription;
	cout << "Enter the number of avaliable seats";
	cin >> x.number_of_avaliable_seats;
	eventlist.push_back(x);
}

void displayevent() {
	for (int i = 0; i < eventlist.size(); i++) {
		cout << "Name: " << eventlist[i].eventname << endl;
		cout << "Time: " << eventlist[i].eventtime << endl;
		cout << "Location: " << eventlist[i].eventlocation << endl;
		cout << "Description: " << eventlist[i].eventdescription << endl;
		cout << "Number of avaliable seats: " << eventlist[i].number_of_avaliable_seats << endl;


	}

}

void bookevent() {
	string searcheventname;
	cout << "Enter the name of the event you want to book:";
	cin >> searcheventname; 
	for (int i = 0; i < eventlist.size(); i++) {
		if (searcheventname == eventlist[i].eventname)
			cout << "You have booked the event" << searcheventname << endl;
	}
}


