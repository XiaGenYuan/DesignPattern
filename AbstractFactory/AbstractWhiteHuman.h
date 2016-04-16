#pragma once
#include "Human.h"
class AbstractWhiteHuman :
	public Human
{
public:
	AbstractWhiteHuman();
	virtual ~AbstractWhiteHuman();
	void laugh();
	void cry();
	void talk();
};

