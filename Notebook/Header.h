#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <list>
using namespace std;
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

struct description_event;
list < description_event> Notebook;

void view_events(list < description_event> Notebook);

void Add_events();

void SearchEventImportanceLevel();