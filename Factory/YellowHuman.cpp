#include "YellowHuman.h"
#include <iostream>


YellowHuman::YellowHuman()
{
}


YellowHuman::~YellowHuman()
{
}


void YellowHuman::laugh() {
	std::cout << "我是黄种人，我会叫" << std::endl;
}

void YellowHuman::cry() {
	std::cout << "我是黄种人，我会哭" << std::endl;
}

void YellowHuman::talk() {
	std::cout << "我是黄种人，我会说" << std::endl;
}