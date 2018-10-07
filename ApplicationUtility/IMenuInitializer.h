#pragma once
#include "IMenu.h"
#include "IStarter.h"
class IMenuInitializer
{
public:
	virtual IStarter& SetMenu(IMenu& menu) = 0;
};
