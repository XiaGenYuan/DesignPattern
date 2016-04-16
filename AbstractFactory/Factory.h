#pragma once
#include "Human.h"
class Factory
{
public:
	Factory();
	virtual ~Factory();
	virtual Human *createWhiteHuman() = 0;
	virtual Human *createYellowHuman() = 0;
	virtual Human *createBlackHuman() = 0;
};

