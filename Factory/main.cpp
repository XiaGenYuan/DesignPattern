#include <iostream>
#include "Human.h"
#include "HumanFactory.h"
using std::cout;
using std::endl;

int main(){
	cout << "����ĵ�һ�����������ģ�����" << endl;
	Human *white_human = HumanFactory::createHuman(WHITE);
	white_human->laugh();
	white_human->cry();
	white_human->talk();
	cout << endl;
	delete white_human;

	cout << "����ĵ�һ�����������ģ�������" << endl;
	Human *yellow_human = HumanFactory::createHuman(YELLOW);
	yellow_human->laugh();
	yellow_human->cry();
	yellow_human->talk();
	cout << endl;
	delete yellow_human;

	cout << "����ĵ�һ�����������ģ�������" << endl;
	Human *black_human = HumanFactory::createHuman(BLACK);
	black_human->laugh();
	black_human->cry();
	black_human->talk();
	cout << endl;
	delete black_human;
	return 0;
}