#include "pch.h"
#include "MatchesData.h"


MatchesData::MatchesData(int args) 
{
	this->args = args;
}


MatchesData::~MatchesData()
{
}

const char * MatchesData::GetName()
{
	return nullptr;
}

void MatchesData::SetValue(int args)
{
	if (args >= 1 && args <= sizeof(int)) {
		this->args = args;
	}
}

const int MatchesData::GetValue()
{
	return args;
}