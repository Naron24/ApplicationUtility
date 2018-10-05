#pragma once
#include "IAlgorythm.h"
#include "IMenuInitializer.h"
/// The abstract class to create the logic of an application
class IInitializer
{
public:
	virtual IMenuInitializer& SetAlgo(const IAlgorythm& algo) = 0;
	IInitializer();
	~IInitializer();
};



IInitializer::IInitializer()
{
	
}


IInitializer::~IInitializer()
{
}
