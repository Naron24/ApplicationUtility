#pragma once
#include "IGenericAlgo.h"
class MatchesAlgo : public IGenericAlgo<int>, public IAlgorythm
{
	
public:
	MatchesAlgo();
	~MatchesAlgo();

	// Inherited via IGenericAlgo
	virtual void Create() override;
	virtual void SetVars(int & vars) override;
	virtual const int & GetResult() override;
	virtual int Act() override;
	virtual int Act(int & vars) override;
};

