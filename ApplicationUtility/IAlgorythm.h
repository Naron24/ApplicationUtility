#pragma once
#include "IData.h"
///The basic abstract class to conduct the action of the application
class IAlgorythm
{
protected:
	bool calculated = false;
	IData* dataAlgo = nullptr;
public:
	virtual ~IAlgorythm()
	{
		dataAlgo = nullptr;
	}
	virtual bool GetIfCalculated() = 0;
	virtual IData& Act(IData& data) = 0;
};
