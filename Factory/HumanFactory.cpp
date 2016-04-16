#include "HumanFactory.h"
#include "Human.h"
#include "WhiteHuman.h"
#include "YellowHuman.h"
#include "BlackHuman.h"


HumanFactory::HumanFactory()
{
}


HumanFactory::~HumanFactory()
{
}


Human* HumanFactory::createHuman(HumanType human_type) {
	Human *human = NULL;
	if (human_type == WHITE) {
		human = new WhiteHuman();
	}
	else if (human_type == YELLOW) {
		human = new YellowHuman();
	}
	else if (human_type == BLACK) {
		human = new BlackHuman();
	}
	return human; 
}