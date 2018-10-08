#include "pch.h"
#include "MatchesMenuInitializer.h"
#include "StarterMenuInitializer.h"

MatchesMenuInitializer::MatchesMenuInitializer(Observer* observer) : observe(observer)
{
}


MatchesMenuInitializer::~MatchesMenuInitializer()
{
	if (starter != nullptr) {
		delete starter;
		starter = nullptr;
	}
}

IStarter & MatchesMenuInitializer::SetMenu(IMenu & menu)
{
	observe->SetMenu(&menu);
	starter = dynamic_cast<IStarter*>(new StarterMenuInitializer(*observe));
	return *starter;
	// TODO: insert return statement here
}
