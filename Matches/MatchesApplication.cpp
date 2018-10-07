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
	initializer = Converter<IInitializer, MatchesInitializer>().Convert(new MatchesInitializer());
	return *initializer;
}
