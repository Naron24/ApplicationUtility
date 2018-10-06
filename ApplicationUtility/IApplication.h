#pragma once
#include "IInitializer.h"
class IApplication
{
public:
	virtual IInitializer& Initialize() = 0;
};