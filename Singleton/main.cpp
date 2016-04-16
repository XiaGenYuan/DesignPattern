#include <iostream>
#include "Emperor.h"
using std::cout;
using std::endl;


int main() {
	// 第一天
	Emperor *emperor1 = Emperor::GetInstance();
	emperor1->EmperorInfo();
	// 第二天
	Emperor *emperor2 = Emperor::GetInstance();
	emperor2->EmperorInfo();
	// 第三天
	Emperor *emperor3 = Emperor::GetInstance();
	emperor3->EmperorInfo();
	Emperor::GetInstance()->DeleteInstance();
	return 0;
}