#pragma once
class IMenu
{
public:
	virtual void AdditionalDependencies() = 0;
	IMenu();
	~IMenu();
};



IMenu::IMenu()
{
}


IMenu::~IMenu()
{
}
