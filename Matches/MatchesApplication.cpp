#include "pch.h"
#include "MatchesApplication.h"
#include "MatchesInitializer.h"

MatchesApplication::MatchesApplication()
{
}


MatchesApplication::~MatchesApplication()
{
	if (initializer != nullptr) {
		delete initializer;
		initializer = nullptr;
	}
}

IInitializer & MatchesApplication::Initialize()
{
	// TODO: insert return statement here
	initializer = dynamic_cast<IInitializer*>(new MatchesInitializer());
	return *initializer;
}
