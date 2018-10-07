#pragma once
#include <IInitializer.h>
class MatchesInitializer :
	public IInitializer
{
private:
	IMenuInitializer* menuInit;
public:
	MatchesInitializer();
	~MatchesInitializer();

	// Inherited via IInitializer
	virtual IMenuInitializer & SetAlgo(IAlgorythm & algo) override;
};

