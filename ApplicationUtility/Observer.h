#pragma once
#include "IAlgorythm.h"
#include "IMenu.h"
#include "IStarter.h"
class Observer
{
private:
	IMenu* menu = nullptr;
	IAlgorythm* algo = nullptr;
	IStarter* starter = nullptr;
public:
	Observer(){			
	}
	virtual void SetMenu(IMenu* menu) {
		this->menu = menu;
	}
	virtual void SetStarter(IStarter* starte) {
		this->starter = starte;
	}
	virtual void SetAlgo(IAlgorythm* algo) {
		this->algo = algo;
	}
	virtual IMenu& GetMenu() const
	{
		return *this->menu;
	};
	virtual IStarter& GetStarter() const
	{
		return *this->starter;
	};
	virtual IAlgorythm& GetAlgo() const
	{
		return *this->algo;
	};
protected:
};
