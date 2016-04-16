#pragma once
#include <string>
#include "Human.h"
using std::string;
class HumanFactory
{
public:
	HumanFactory();
	virtual ~HumanFactory();
	static Human* createHuman(HumanType human_type);
};

