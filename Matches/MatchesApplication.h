#pragma once
#include "IApplication.h"
#include "IInitializer.h"
class MatchesApplication : public IApplication
{
private:
	IInitializer* initializer;
public:
	MatchesApplication();
	~MatchesApplication();

	// Inherited via IApplication
	virtual IInitializer & Initialize() override;
};

