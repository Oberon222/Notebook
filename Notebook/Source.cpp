#include <iostream>
#include <string>
#include <Windows.h>
#include <list>
#include "Header.h"
using namespace std;

//sdlfjasldfj

int main() {
	int action = 0;

	do
	{
		cout << "1) View events" << endl;
		cout << "2) Add event" << endl;
		cout << "3) Search for an event of importance" << endl;
		cout << "4) Exit" << endl;
		cin >> action;

		switch (action)
		{
		case 1:
		{
			view_events(Notebook);
			break;
		}

		case 2:
		{
			Add_events();
			break;
		}
		
		case 3:
		{
			SearchEventImportanceLevel();
			break;
		}

		}

	} while (action !=4);

	return 0;

}