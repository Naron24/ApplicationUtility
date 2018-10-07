#pragma once
#include"IGenericAlgo.h"
#include "IData.h"
class IGenericDataAlgo : IGenericAlgo<IData>
{
public:
	virtual void Update(IData& data) = 0;
};

