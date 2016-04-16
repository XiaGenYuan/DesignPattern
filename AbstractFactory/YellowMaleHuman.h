#pragma once
#include "AbstractYellowHuman.h"
class YellowMaleHuman :
	public AbstractYellowHuman
{
public:
	YellowMaleHuman();
	virtual ~YellowMaleHuman();
	void sex();
};

