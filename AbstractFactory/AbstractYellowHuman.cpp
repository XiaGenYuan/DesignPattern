#include "AbstractYellowHuman.h"
#include <iostream>


AbstractYellowHuman::AbstractYellowHuman()
{
}


AbstractYellowHuman::~AbstractYellowHuman()
{
}


void AbstractYellowHuman::laugh() {
	std::cout << "黄种人会大笑，幸福啊" << std::endl;
}

void AbstractYellowHuman::cry() {
	std::cout << "黄种人会哭" << std::endl;
}

void AbstractYellowHuman::talk() {
	std::cout << "黄种人会说话，一般说的汉语" << std::endl;
}