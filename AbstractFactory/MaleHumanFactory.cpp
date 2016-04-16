#include "MaleHumanFactory.h"


MaleHumanFactory::MaleHumanFactory()
{
}


MaleHumanFactory::~MaleHumanFactory()
{
}

Human* MaleHumanFactory::createWhiteHuman() {
	return this->createHuman(WHITE_MALE);
}

Human* MaleHumanFactory::createYellowHuman() {
	return this->createHuman(YELLOW_MALE);
}

Human* MaleHumanFactory::createBlackHuman() {
	return this->createHuman(BLACK_MALE);
}