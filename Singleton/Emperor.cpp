#include "Emperor.h"
#include <iostream>
Emperor *Emperor::instance_ = 0;

Emperor::Emperor()
{
}


Emperor::~Emperor()
{
}

void Emperor::EmperorInfo() {
	std::cout << "ÎÒÊÇË³ÖÎ»ÊµÛ" << std::endl;
}

Emperor *Emperor::GetInstance() {
	if (0 == instance_) {
		instance_ = new Emperor();
	}
	return instance_;
}

void Emperor::DeleteInstance() {
	if (instance_ != 0) {
		delete instance_;
		instance_ = 0;
	}
}