#pragma once
#include "IGenericAlgo.h"
class MatchesAlgo : public IGenericAlgo<int>
{
public:
	MatchesAlgo();
	~MatchesAlgo();

	// Inherited via IGenericAlgo
	virtual void SetVars(int & vars) override;
	virtual const int & GetResult() override;
	virtual int Act() override;
	virtual int Act(int & vars) override;

	// Inherited via IAlgorythm
	virtual bool GetIfCalculated() override;

	// Inherited via IAlgorythm
	virtual IData & Act(IData & data) override;
private:
	virtual long GetRestraints() {
		long base = 10;
		for (int i = 0; i < 9; i++)
		{
			base = base * 10;
		}
		return base;
	}
};

