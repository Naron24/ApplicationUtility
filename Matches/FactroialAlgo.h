#pragma once
#include <IGenericAlgo.h>
class FactorialAlgo :
	public IGenericAlgo<int>
{
public:
	FactorialAlgo();
	~FactorialAlgo();


	// Inherited via IGenericAlgo
	virtual bool GetIfCalculated() override;

	virtual int Act() override;


	// Inherited via IGenericAlgo
	virtual IData & Act(IData & data) override;

	// Inherited via IAlgorythm
};

