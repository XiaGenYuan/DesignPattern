#pragma once
#include "Human.h"
class AbstractBlackHuman :
	public Human
{
public:
	AbstractBlackHuman();
	virtual ~AbstractBlackHuman();
	void laugh();
	void cry();
	void talk();
};

