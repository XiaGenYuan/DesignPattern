#pragma once
#include "AbstractYellowHuman.h"
class YellowFemaleHuman :
	public AbstractYellowHuman
{
public:
	YellowFemaleHuman();
	virtual ~YellowFemaleHuman();
	void sex();
};

