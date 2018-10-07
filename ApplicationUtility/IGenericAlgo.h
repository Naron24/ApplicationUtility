#pragma once
#include "IAlgorythm.h"
template <typename TVars>
 class IGenericAlgo : IAlgorythm 
{
protected:
	TVars vars;
public:
	virtual void SetVars(TVars& vars) = 0;
	const virtual TVars& GetResult() = 0;
	virtual TVars Act() = 0;
	virtual TVars Act(TVars& vars) = 0;
};