#pragma once
#include "Human.h"
class YellowHuman :
	public Human
{
public:
	YellowHuman();
	virtual ~YellowHuman();
	void laugh();
	void cry();
	void talk();
};

