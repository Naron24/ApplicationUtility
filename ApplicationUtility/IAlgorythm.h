#pragma once
#include "IMenu.h"
#include "IStarter.h"
class IAlgorythm
{
public:
	virtual IStarter& SetMenu(const IMenu& menu) = 0;
	IAlgorythm();
	~IAlgorythm();
};



IAlgorythm::IAlgorythm()
{
}


IAlgorythm::~IAlgorythm()
{
}
