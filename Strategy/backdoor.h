#pragma once
#include "strategy.h"

class BackDoor : 
	public Strategy
{
public:
	BackDoor();
	virtual ~BackDoor();
	void operate();
};

