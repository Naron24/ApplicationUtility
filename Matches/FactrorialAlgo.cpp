#pragma once
#include "pch.h"
#include "FactroialAlgo.h"
#include "FactorialData.h"

FactorialAlgo::FactorialAlgo()
{
}


FactorialAlgo::~FactorialAlgo()
{
}

bool FactorialAlgo::GetIfCalculated()
{
	return false;
}

int FactorialAlgo::Act()
{
	int i = 1;
	if (1 <= vars && vars <= 2000)
	{
		do
		{
			vars /= i;
			i++;
		} while (vars > 1);
	}
	///Excluding the division on 1
	return i - 1;
}

IData & FactorialAlgo::Act(IData & data)
{
	int value = dynamic_cast<FactorialData*>(&data)->GetValue();
	SetVars(value);
	this->dataAlgo = dynamic_cast<IData*>(new FactorialData(Act()));
	return *dynamic_cast<IData*>(this->dataAlgo);
}
