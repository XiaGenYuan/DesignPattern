#include <iostream>
#include "Liushishi.h"
#include "ShishiAgent.h"
using std::cout;
using std::endl;

int main() {
	// ����һ����ʫʫ
	Liushishi *shishi = new Liushishi();
	// ����һ����ʫʫ�ľ�����
	ShishiAgent *agent = new ShishiAgent();
	// ����ʫʫ��һЩ���齻�������˽��д���
	agent->SetStar(shishi);
	// �����˴�����ʫʫ�μ����յ��������
	agent->JoininShow();
	// �����˴�����ʫʫ�Ĺ����������
	agent->PlayAds();
	delete shishi;
	delete agent;
	return 0;
}