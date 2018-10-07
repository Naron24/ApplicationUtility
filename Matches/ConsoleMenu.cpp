#include "pch.h"
#include "ConsoleMenu.h"
#include "MatchesData.h"
#include "Converter.h"
#include <iostream>
using namespace std;


ConsoleMenu::~ConsoleMenu()
{
}


void ConsoleMenu::Show()
{
	while (true)
	{
		int value = 0;
		cout << "/n/n Hi, there please enter the number of squares you want to create. /n The programm on its turn will create the min number of matches it needs. /n";
		cin >> value;
		if (value >= 1 && value <= INT32_MAX) {
			Update(MatchesData(value).Convert());
			int result = algo.Act();
			if (result != 0) {
				cout << "/n The result is" << result;
				break;
			}
			else {
				continue;
			}
		}
		else {
			cout << "The value is wrong! Please try once more time!";
		}
	}
}

void ConsoleMenu::Create()
{

}

void ConsoleMenu::Update(IData& data)
{
	IData* dat = &data;
	int value = Converter<MatchesData, IData>().Convert(dat)->GetValue();
	algo.SetVars(value);
}
