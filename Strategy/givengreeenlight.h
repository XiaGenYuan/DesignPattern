#pragma once
#include "strategy.h"
class GivenGreeenLight :
	public Strategy
{
public:
	GivenGreeenLight();
	virtual ~GivenGreeenLight();
	void operate();
};

