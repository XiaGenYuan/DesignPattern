#include "AbstractWhiteHuman.h"
#include <iostream>


AbstractWhiteHuman::AbstractWhiteHuman()
{
}


AbstractWhiteHuman::~AbstractWhiteHuman()
{
}


void AbstractWhiteHuman::laugh() {
	std::cout << "白种人会大笑，幸福啊" << std::endl;
}

void AbstractWhiteHuman::cry() {
	std::cout << "白种人会哭" << std::endl;
}

void AbstractWhiteHuman::talk() {
	std::cout << "白种人会说话，一般说的英语" << std::endl;
}