#include "pch.h"
#include "StarterMenuInitializer.h"


StarterMenuInitializer::StarterMenuInitializer(Observer& observer) : observer(observer)
{
}


StarterMenuInitializer::~StarterMenuInitializer()
{
}

void StarterMenuInitializer::Start()
{
	observer.GetMenu().Show();
}
