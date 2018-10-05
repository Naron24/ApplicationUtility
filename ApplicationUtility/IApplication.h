#pragma once
#include "IInitializer.h"
class IApplication
{
public:
	virtual void Initialize(		) = 0;
	IApplication();
	virtual ~IApplication();
};



IApplication::IApplication()
{
}


IApplication::~IApplication()
{
}
