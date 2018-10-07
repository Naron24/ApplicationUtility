#pragma once
#include "IData.h"
class IMenu
{
public:
	virtual void Show() = 0;
protected:
	virtual void Create() = 0;
	///To update the inner listeners
	virtual void Update(IData& data) = 0;
};