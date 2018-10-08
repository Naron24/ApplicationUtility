#include "pch.h"
#include "ConsoleMenu.h"
#include "MatchesData.h"
#include "Converter.h"
#include <iostream>
using namespace std;


ConsoleMenu::~ConsoleMenu()
{
	if (data != nullptr) {
		delete data;
		data = nullptr;
	}
}


void ConsoleMenu::Show()
{
	while (true)
	{
		int value = 0;
		value = dynamic_cast<IGenericData<int>*>(&GetData())->GetValue();
		if (value >= 1 && value <= INT32_MAX) {			
			int result = dynamic_cast<IGenericData<int>*>(&ExtractResult(*data))->GetValue();
			if (result != 0) {
				cout << endl << endl << "The result is " << result;
				break;
			}
			else {
				cout << "The value is wrong! Please try once more time!";
				continue;
			}
		}
		else {
			cout << "The value is wrong! Please try once more time!";
		}
	}
}

IData& ConsoleMenu::GetData()
{
	int value = 0;
	cout << "Hi, there please enter the number of squares you want to create."
		<< endl << endl << " The programm on its turn will create the min number of matches it needs."
		<< endl;
	cin >> value;
	SetData(new MatchesData(value));
	return *dynamic_cast<IData*>(data);
}

IData & ConsoleMenu::ExtractResult(IData & value)
{
	SetData(&algo->Act(value));
	return *data;
}
