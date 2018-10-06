#pragma once
#include "IMenu.h"
#include "IStarter.h"

///The basic abstract class to conduct the action of the application
class IAlgorythm
{
protected:
public:
	virtual void Create() = 0;
};
