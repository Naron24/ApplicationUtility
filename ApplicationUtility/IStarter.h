#pragma once
class IStarter
{
public:
	virtual void Start() = 0;
	IStarter();
	~IStarter();
};



IStarter::IStarter()
{
}


IStarter::~IStarter()
{
}
