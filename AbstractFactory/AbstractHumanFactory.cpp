#include "AbstractHumanFactory.h"
#include "WhiteFemaleHuman.h"
#include "WhiteMaleHuman.h"
#include "YellowFemaleHuman.h"
#include "BlackFemaleHuman.h"
#include "BlackMaleHuman.h"
#include "YellowMaleHuman.h"
#include <iostream>
using std::cout;
using std::endl;


AbstractHumanFactory::AbstractHumanFactory()
{
}


AbstractHumanFactory::~AbstractHumanFactory()
{
}

Human* AbstractHumanFactory::createHuman(HumanType human_type) {
	if (WHITE_FEMALE == human_type) {
		cout << "WHITE_FEMALE created" << endl;
		return new WhiteFemaleHuman();
	}
	else if (WHITE_MALE == human_type) {
		cout << "WHITE_MALE created" << endl;
		return new WhiteMaleHuman();
	}
	else if (YELLOW_FEMALE == human_type) {
		cout << "YELLOW_FEMALE created" << endl;
		return new YellowFemaleHuman();
	}
	else if (YELLOW_MALE == human_type) {
		cout << "YELLOW_MALE created" << endl;
		return new YellowMaleHuman();
	}
	else if (BLACK_FEMALE == human_type) {
		cout << "BLACK_FEMALE created" << endl;
		return new BlackFemaleHuman();
	}
	else if (BLACK_MALE == human_type) {
		cout << "BLACK_MALE created" << endl;
		return new BlackMaleHuman();
	}
}