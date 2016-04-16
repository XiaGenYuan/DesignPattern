#include <iostream>
#include "Factory.h"
#include "MaleHumanFactory.h"
#include "FemaleHumanFactory.h"
#include "Human.h"
using std::cout;

int main(){
	Factory *malehumanfactory = new MaleHumanFactory();
	Factory *femalehumanfactory = new FemaleHumanFactory();

	Human *femalewhitehuman = femalehumanfactory->createWhiteHuman();
	Human *maleblackhuman = malehumanfactory->createBlackHuman();
	return 0;
}