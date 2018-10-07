#pragma once
#include "IMenu.h"
class IMenuInitializer
{
public:
	virtual IStarter& SetMenu(const IMenu& menu) = 0;
};
