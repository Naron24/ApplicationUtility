#include "pch.h"
#include "MatchesAlgo.h"


MatchesAlgo::MatchesAlgo()
{
	vars = 0;
}


MatchesAlgo::~MatchesAlgo()
{
}

void MatchesAlgo::Create()
{
	//this function is deprecated
}

void MatchesAlgo::SetVars(int & vars)
{
	if (vars >= 1 && vars <= sizeof(int)) {
		this->vars = vars;
	}
}

const int & MatchesAlgo::GetResult()
{
	return vars;
}

int MatchesAlgo::Act()
{
	int matchsticks = 0;
	for (int i = 1; i < vars; i++)
	{
		matchsticks += 4 * i;
	}
	return matchsticks;
}

int MatchesAlgo::Act(int & vars)
{
	SetVars(vars);	
	return Act();
}
