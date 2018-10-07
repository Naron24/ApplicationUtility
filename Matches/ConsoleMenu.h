#pragma once
#include "MatchesAlgo.h"
class ConsoleMenu : IMenu
{
private:
	MatchesAlgo algo;
public:
	ConsoleMenu(IAlgorythm* algo)
	{
		this->algo = *dynamic_cast<MatchesAlgo*>(algo);
	}
	~ConsoleMenu();

	// Inherited via IMenu
	virtual void Show() override;
protected:
	virtual void Create() override;

	// Inherited via IMenu
	virtual void Update(IData & data) override;

};

