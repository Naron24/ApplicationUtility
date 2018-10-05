#pragma once
#include "IAlgorythm.h"
class IInitializer
{
public:
	virtual IAlgorythm& SetAlgo(const IAlgorythm& algo) = 0;
	IInitializer();
	~IInitializer();
};



IInitializer::IInitializer()
{
}


IInitializer::~IInitializer()
{
}
