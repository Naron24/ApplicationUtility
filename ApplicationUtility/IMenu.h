#pragma once
#include "IData.h"
class IMenu
{
public:
	virtual void Show() = 0;
protected:
	virtual IData& GetData() = 0;
};