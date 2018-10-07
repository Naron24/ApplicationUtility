#pragma once
///The abstract interface for the data that is included to the algorythm
class IData
{
public:
	virtual const char* GetName() = 0;
};
