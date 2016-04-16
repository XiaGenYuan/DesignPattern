#include "AbstractBlackHuman.h"
#include <iostream>


AbstractBlackHuman::AbstractBlackHuman()
{
}


AbstractBlackHuman::~AbstractBlackHuman()
{
}


void AbstractBlackHuman::laugh() {
	std::cout << "黑种人会大笑，幸福啊" << std::endl;
}

void AbstractBlackHuman::cry() {
	std::cout << "黑种人会哭" << std::endl;
}

void AbstractBlackHuman::talk() {
	std::cout << "黑种人会说话，一般也说的英语" << std::endl;
}