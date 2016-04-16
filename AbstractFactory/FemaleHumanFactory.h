#pragma once
#include "AbstractHumanFactory.h"
class FemaleHumanFactory :
	public AbstractHumanFactory
{
public:
	FemaleHumanFactory();
	virtual ~FemaleHumanFactory();
	Human* createWhiteHuman();
	Human* createYellowHuman();
	Human* createBlackHuman();
};

