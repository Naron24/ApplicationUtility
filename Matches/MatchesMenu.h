#pragma once
#include "ConsoleMenu.h"
#include "FactorialData.h"
#include "IAlgorythm.h"
class MatchesMenu :
	public ConsoleMenu
{
public:
	MatchesMenu(IAlgorythm* algo);
	~MatchesMenu();
protected: 
	virtual IData& GetData() override;
};



MatchesMenu::MatchesMenu(IAlgorythm* algo) : ConsoleMenu(algo)
{
}


MatchesMenu::~MatchesMenu()
{
}

inline IData & MatchesMenu::GetData()
{
	int value = 0;
	cout << "Hi, there please enter the number of squares you want to create."
		<< endl << endl << " The programm on its turn will create the min number of matches it needs."
		<< endl;
	cin >> value;
	data = new MatchesData(value);
	return *dynamic_cast<IData*>(data);
	// TODO: insert return statement here
}
