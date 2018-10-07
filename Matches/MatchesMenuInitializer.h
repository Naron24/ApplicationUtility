#pragma once
class MatchesMenuInitializer : IMenuInitializer
{
private:
	IStarter* starter;
	Observer* observe;
public:
	MatchesMenuInitializer(Observer* observer);
	~MatchesMenuInitializer();

	// Inherited via IMenuInitializer
	virtual IStarter & SetMenu(IMenu & menu) override;
};

