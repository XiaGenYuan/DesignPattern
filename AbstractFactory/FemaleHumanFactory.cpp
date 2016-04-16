#include "FemaleHumanFactory.h"


FemaleHumanFactory::FemaleHumanFactory()
{
}


FemaleHumanFactory::~FemaleHumanFactory()
{
}


Human* FemaleHumanFactory::createWhiteHuman() {
	return this->createHuman(WHITE_FEMALE);
}

Human* FemaleHumanFactory::createYellowHuman() {
	return this->createHuman(YELLOW_FEMALE);
}

Human* FemaleHumanFactory::createBlackHuman() {
	return this->createHuman(BLACK_FEMALE);
}