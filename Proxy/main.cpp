#include <iostream>
#include "Liushishi.h"
#include "ShishiAgent.h"
using std::cout;
using std::endl;

int main() {
	// 生成一个刘诗诗
	Liushishi *shishi = new Liushishi();
	// 生成一个刘诗诗的经纪人
	ShishiAgent *agent = new ShishiAgent();
	// 将刘诗诗的一些事情交给经纪人进行处理
	agent->SetStar(shishi);
	// 经纪人代理刘诗诗参加综艺的相关事情
	agent->JoininShow();
	// 经纪人代理刘诗诗拍广告的相关事情
	agent->PlayAds();
	delete shishi;
	delete agent;
	return 0;
}