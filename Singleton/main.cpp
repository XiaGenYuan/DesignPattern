#include <iostream>
#include "Emperor.h"
using std::cout;
using std::endl;


int main() {
	// ��һ��
	Emperor *emperor1 = Emperor::GetInstance();
	emperor1->EmperorInfo();
	// �ڶ���
	Emperor *emperor2 = Emperor::GetInstance();
	emperor2->EmperorInfo();
	// ������
	Emperor *emperor3 = Emperor::GetInstance();
	emperor3->EmperorInfo();
	Emperor::GetInstance()->DeleteInstance();
	return 0;
}