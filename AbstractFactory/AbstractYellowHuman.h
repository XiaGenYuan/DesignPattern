#pragma once
#include "Human.h"
class AbstractYellowHuman :
	public Human
{
public:
	AbstractYellowHuman();
	virtual ~AbstractYellowHuman();
	void laugh();
	void cry();
	void talk();
};

