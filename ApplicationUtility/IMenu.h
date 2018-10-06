#pragma once
class IMenu
{
public:
	virtual void Show() = 0;
protected:
	virtual void Create() = 0;
};