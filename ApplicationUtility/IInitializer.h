#pragma once
#include "IAlgorythm.h"
#include "IMenuInitializer.h"
#include "Observer.h"
/// The abstract class to create the logic of an application
class IInitializer
{
protected :
	Observer observer;
public:
	virtual IMenuInitializer& SetAlgo(IAlgorythm& algo) = 0;
};