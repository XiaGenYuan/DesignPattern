#include <iostream>
#include "backdoor.h"
#include "context.h"
#include "givengreeenlight.h"
#include "blockenemy.h"
using std::cout;
using std::endl;

int main() {
	/*
	���Ƴ���������������������Ľ��������β����
	*/
	Context *context = new Context();
	// �ոյ����ʱ�𿪵�һ��
	cout << "�ո�������𿪵�һ�����" << endl;
	BackDoor *back_door = new BackDoor();
	context->SetStrategy(back_door);
	context->operate();
	delete back_door;
	cout << endl << endl;

	// �����ֲ�˼�񣬲𿪵ڶ���
	cout << "�����ֲ�˼�񣬲𿪵ڶ���" << endl;
	GivenGreeenLight *given_green_light = new GivenGreeenLight();
	context->SetStrategy(given_green_light);
	context->operate();
	delete given_green_light;
	cout << endl << endl;

	// ��Ȩ��С��׷����զ�죿�������
	cout << "��Ȩ��С��׷����զ�죿�������" << endl;
	BlockEnemy *block_enemy = new BlockEnemy();
	context->SetStrategy(block_enemy);
	context->operate();
	delete block_enemy;
	cout << endl << endl;
    
    delete context;
}
