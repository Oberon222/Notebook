#pragma once
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


struct description_event;

void view_events(list < description_event> Notebook);

void Add_events();

void SearchEventImportanceLevel();