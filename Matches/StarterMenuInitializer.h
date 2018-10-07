#pragma once
#include <IStarter.h>
class StarterMenuInitializer :
	public IStarter
{
private:
	Observer& observer;
public:
	StarterMenuInitializer(Observer& observer);
	~StarterMenuInitializer();

	// Inherited via IStarter
	virtual void Start() override;
};

