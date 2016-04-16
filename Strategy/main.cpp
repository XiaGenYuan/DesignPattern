#include <iostream>
#include "backdoor.h"
#include "context.h"
#include "givengreeenlight.h"
#include "blockenemy.h"
using std::cout;
using std::endl;

int main() {
	/*
	赵云出场，他根据诸葛亮给他的交代，依次拆开妙计
	*/
	Context *context = new Context();
	// 刚刚到吴国时拆开第一个
	cout << "刚刚吴国，拆开第一个妙计" << endl;
	BackDoor *back_door = new BackDoor();
	context->SetStrategy(back_door);
	context->operate();
	delete back_door;
	cout << endl << endl;

	// 刘备乐不思蜀，拆开第二个
	cout << "刘备乐不思蜀，拆开第二个" << endl;
	GivenGreeenLight *given_green_light = new GivenGreeenLight();
	context->SetStrategy(given_green_light);
	context->operate();
	delete given_green_light;
	cout << endl << endl;

	// 孙权的小兵追来了咋办？拆第三个
	cout << "孙权的小兵追来了咋办？拆第三个" << endl;
	BlockEnemy *block_enemy = new BlockEnemy();
	context->SetStrategy(block_enemy);
	context->operate();
	delete block_enemy;
	cout << endl << endl;
    
    	delete context;
}
