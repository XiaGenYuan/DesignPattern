#include "AbstractWhiteHuman.h"
#include <iostream>


AbstractWhiteHuman::AbstractWhiteHuman()
{
}


AbstractWhiteHuman::~AbstractWhiteHuman()
{
}


void AbstractWhiteHuman::laugh() {
	std::cout << "�����˻��Ц���Ҹ���" << std::endl;
}

void AbstractWhiteHuman::cry() {
	std::cout << "�����˻��" << std::endl;
}

void AbstractWhiteHuman::talk() {
	std::cout << "�����˻�˵����һ��˵��Ӣ��" << std::endl;
}