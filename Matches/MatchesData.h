#pragma once
#include "IGenericData.h"
#include "IData.h"
class MatchesData : public IGenericData<int>, public IData 
{
private:

public:

	MatchesData(int args);
	MatchesData(const MatchesData& match)
	{
		this->args = match.args;
	}
	MatchesData(const MatchesData* match)
	{
		this->args = match->args;
	}
	~MatchesData();

	// Inherited via IData
	virtual const char * GetName() override;
	// Inherited via IGenericData

	virtual void SetValue(int args) override;
	virtual const int GetValue() override;
	virtual IData& Convert();
};

