#pragma once
#include "Factory.h"
class AbstractHumanFactory :
	public Factory
{
public:
	AbstractHumanFactory();
	virtual ~AbstractHumanFactory();
	Human* createHuman(HumanType human_type);
};

