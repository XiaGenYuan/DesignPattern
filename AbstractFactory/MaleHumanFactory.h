#pragma once
#include "AbstractHumanFactory.h"
class MaleHumanFactory :
	public AbstractHumanFactory
{
public:
	MaleHumanFactory();
	virtual ~MaleHumanFactory();
	Human* createWhiteHuman();
	Human* createYellowHuman();
	Human* createBlackHuman();
};

