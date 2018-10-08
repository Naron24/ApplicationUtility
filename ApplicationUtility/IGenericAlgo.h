#pragma once
#include "IAlgorythm.h"
template <typename TVars>
 class IGenericAlgo : public IAlgorythm 
{
protected:
	TVars vars;
public:
	virtual void SetVars(TVars& vars) {
		this->vars = vars;
	};
	const virtual TVars& GetResult() {
		return vars;
	};
	virtual TVars Act() = 0;
	virtual TVars Act(TVars& vars) {
		SetVars(vars);
		return Act();
	};
};