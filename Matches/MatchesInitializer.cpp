#include "pch.h"
#include "MatchesInitializer.h"
#include "MatchesMenuInitializer.h"

MatchesInitializer::MatchesInitializer()
{
}


MatchesInitializer::~MatchesInitializer()
{
	if (menuInit != nullptr) {
		delete menuInit;
		menuInit = nullptr;
	}
}

IMenuInitializer & MatchesInitializer::SetAlgo(IAlgorythm & algo)
{
	observer.SetAlgo(&algo);
	menuInit = dynamic_cast<IMenuInitializer*>(new MatchesMenuInitializer(&observer));
	return *menuInit;
	// TODO: insert return statement here
}
