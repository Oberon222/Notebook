#include "Header.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include <list>
using namespace std;

struct description_event
{
	int Number_events;
	string title;
	string description;
	string day;
	string hours;
	int level_importance;
};


void view_events(list<description_event> Notebook)
{
	{
		for (description_event item : Notebook) {
			if (item.level_importance == 1) {
				SetConsoleTextAttribute(color, FOREGROUND_GREEN);
				cout << "Sequence number: " << item.Number_events << endl;
				cout << "Title events: " << item.title << endl;
				cout << "Description events: " << item.description << endl;
				cout << "The day of the event: " << item.day << endl;
				cout << "The hours of the event: " << item.hours << endl;
				SetConsoleTextAttribute(color, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
			}
			else if (item.level_importance == 2) {
				SetConsoleTextAttribute(color, FOREGROUND_BLUE);
				cout << "Sequence number: " << item.Number_events << endl;
				cout << "Title events: " << item.title << endl;
				cout << "Description events: " << item.description << endl;
				cout << "The day of the event: " << item.day << endl;
				cout << "The hours of the event: " << item.hours << endl;
				SetConsoleTextAttribute(color, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
			}
			else {
				SetConsoleTextAttribute(color, FOREGROUND_RED);
				cout << "Sequence number: " << item.Number_events << endl;
				cout << "Title events: " << item.title << endl;
				cout << "Description events: " << item.description << endl;
				cout << "The day of the event: " << item.day << endl;
				cout << "The hours of the event: " << item.hours << endl;
				SetConsoleTextAttribute(color, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
			}
		}

	}
}
void Add_events()
{
	description_event NewEvents;
	cout << "Enter the event number ->";
	cin >> NewEvents.Number_events;

	cout << "Enter title new events ->";
	cin >> NewEvents.title;

	cout << "Enter description new events ->";
	cin >> NewEvents.description;

	cout << "Enter the day of the new event ->";
	cin >> NewEvents.day;

	cout << "Enter the hours of the new event ->";
	cin >> NewEvents.hours;

	cout << "Enter the level of importance of the new event (1 to 3)->";
	cin >> NewEvents.level_importance;

	Notebook.push_back(NewEvents);
}

void SearchEventImportanceLevel()
{
	int ImportanceLevel;
	cout << "Enter level importance ->";
	cin >> ImportanceLevel;
	for (description_event item : Notebook) {
		if (item.level_importance == ImportanceLevel) {

			cout << "Sequence number: " << item.Number_events << endl;
			cout << "Title events: " << item.title << endl;
			cout << "Description events: " << item.description << endl;
			cout << "The day of the event: " << item.day << endl;
			cout << "The hours of the event: " << item.hours << endl;

		}

		cout << "----------------" << endl;


	}

}


