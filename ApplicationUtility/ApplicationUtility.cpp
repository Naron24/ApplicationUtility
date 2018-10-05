// ApplicationUtility.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "IInitializer.h"

class MyClass
{
public:
	virtual IInitializer& CreateInitializer() = 0;
	MyClass(int  amin);
	~MyClass();

private:
	int amin;
};

MyClass::MyClass(int amin) : amin(amin)
{
	//this->CreateInitializer().SetAlgo().SetMenu().Start();
}

MyClass::~MyClass()
{
}