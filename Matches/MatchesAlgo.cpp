#pragma once
#include "pch.h"
#include "MatchesAlgo.h"
#include "MatchesData.h"

#include <typeinfo>

MatchesAlgo::MatchesAlgo()
{
	vars = 0;
}


MatchesAlgo::~MatchesAlgo()
{
}

void MatchesAlgo::SetVars(int & vars)
{	/// 10^9 
	long constraint = GetRestraints();
	if (vars >= 1 && vars <= constraint) {
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

	for (int i = 1; i <= vars; i++)
	{
		matchsticks = matchsticks + 4 * i;
	}
	return matchsticks;
}

int MatchesAlgo::Act(int & vars)
{
	SetVars(vars);
	return Act();
}

bool MatchesAlgo::GetIfCalculated()
{
	return false;
}

IData & MatchesAlgo::Act(IData & data)
{
	int value = dynamic_cast<MatchesData*>(&data)->GetValue();
	SetVars(value);
	int result = Act();
	dataAlgo = new MatchesData(result);
	return *dataAlgo;
	// TODO: insert return statement here
}
