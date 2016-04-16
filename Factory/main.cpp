#include <iostream>
#include "Human.h"
#include "HumanFactory.h"
using std::cout;
using std::endl;

int main(){
	cout << "造出的第一批人是这样的：白人" << endl;
	Human *white_human = HumanFactory::createHuman(WHITE);
	white_human->laugh();
	white_human->cry();
	white_human->talk();
	cout << endl;
	delete white_human;

	cout << "造出的第一批人是这样的：黄种人" << endl;
	Human *yellow_human = HumanFactory::createHuman(YELLOW);
	yellow_human->laugh();
	yellow_human->cry();
	yellow_human->talk();
	cout << endl;
	delete yellow_human;

	cout << "造出的第一批人是这样的：黑种人" << endl;
	Human *black_human = HumanFactory::createHuman(BLACK);
	black_human->laugh();
	black_human->cry();
	black_human->talk();
	cout << endl;
	delete black_human;
	return 0;
}