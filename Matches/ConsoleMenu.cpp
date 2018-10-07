#include "pch.h"
#include "ConsoleMenu.h"
#include <iostream>
using namespace std;

ConsoleMenu::ConsoleMenu()
{
}


ConsoleMenu::~ConsoleMenu()
{
}


void ConsoleMenu::Show()
{
	while (true)
	{
		int value = 0;
		cout << "/n/n Hi, there please enter the number of squares you want to create. /n The programm on its turn will create the min number of matches it needs.";
		cin >> value;
		if (value >= 1 && value <= INT32_MAX) {
			//Send value to the system
		}
		else {
			throw new exception("The value is wrong!");		
		}
	}
}

void ConsoleMenu::Create()
{

}
