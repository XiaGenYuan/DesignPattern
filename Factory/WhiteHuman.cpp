#include "WhiteHuman.h"
#include <iostream>


WhiteHuman::WhiteHuman()
{
}


WhiteHuman::~WhiteHuman()
{
}


void WhiteHuman::laugh() {
	std::cout << "我是白种人，我会叫" << std::endl;
}

void WhiteHuman::cry() {
	std::cout << "我是白种人，我会哭" << std::endl;
}

void WhiteHuman::talk() {
	std::cout << "我是白种人，我会说" << std::endl;
}