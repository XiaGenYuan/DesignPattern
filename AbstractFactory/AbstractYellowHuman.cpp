#include "AbstractYellowHuman.h"
#include <iostream>


AbstractYellowHuman::AbstractYellowHuman()
{
}


AbstractYellowHuman::~AbstractYellowHuman()
{
}


void AbstractYellowHuman::laugh() {
	std::cout << "�����˻��Ц���Ҹ���" << std::endl;
}

void AbstractYellowHuman::cry() {
	std::cout << "�����˻��" << std::endl;
}

void AbstractYellowHuman::talk() {
	std::cout << "�����˻�˵����һ��˵�ĺ���" << std::endl;
}