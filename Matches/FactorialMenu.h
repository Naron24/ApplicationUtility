#pragma once
#include "ConsoleMenu.h"
#include "FactorialData.h"
class FactorialMenu :
	public ConsoleMenu
{
public:
	FactorialMenu(IAlgorythm* algo);
	~FactorialMenu();
protected:
	virtual IData& GetData() override;
};



FactorialMenu::FactorialMenu(IAlgorythm* algo) : ConsoleMenu(algo)
{
}


FactorialMenu::~FactorialMenu()
{
}

inline IData & FactorialMenu::GetData()
{
	int value = 0;
	cout << endl << endl << "Hi, there please enter the number of squares you want to create. " << endl << "The programm will calculate the number from the factorial."
		<< endl << endl;
	cin >> value;
	data = new FactorialData(value);
	return *dynamic_cast<IData*>(data);
	// TODO: insert return statement here
}
