#pragma once
#include "IInitializer.h"
class IApplication
{
public:
	virtual IInitializer& Initialize() = 0;
	IApplication();
	virtual ~IApplication();
};



IApplication::IApplication()
{
}


IApplication::~IApplication()
{
}
