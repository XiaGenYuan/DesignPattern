#include "AbstractBlackHuman.h"
#include <iostream>


AbstractBlackHuman::AbstractBlackHuman()
{
}


AbstractBlackHuman::~AbstractBlackHuman()
{
}


void AbstractBlackHuman::laugh() {
	std::cout << "�����˻��Ц���Ҹ���" << std::endl;
}

void AbstractBlackHuman::cry() {
	std::cout << "�����˻��" << std::endl;
}

void AbstractBlackHuman::talk() {
	std::cout << "�����˻�˵����һ��Ҳ˵��Ӣ��" << std::endl;
}