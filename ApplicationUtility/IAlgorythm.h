#pragma once
#include "IMenu.h"
#include "IStarter.h"
class IAlgorythm
{
public:
	virtual void Act() = 0;
	IAlgorythm();
	~IAlgorythm();
};



IAlgorythm::IAlgorythm()
{
}


IAlgorythm::~IAlgorythm()
{
}
