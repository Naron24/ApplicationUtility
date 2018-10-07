#pragma once
class ConsoleMenu : IMenu	
{
public:
	ConsoleMenu();
	~ConsoleMenu();

	// Inherited via IMenu
	virtual void Show() override;
protected:
	virtual void Create() override;
};

