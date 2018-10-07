#pragma once
#include "IData.h"
template <typename TArgs>
class IGenericData : public IData
{
protected:
	TArgs args;
public:
	virtual void SetValue(TArgs args) = 0;
	const virtual TArgs GetValue() = 0;
};
