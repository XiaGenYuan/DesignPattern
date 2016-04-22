#include "HummerModel.h"


HummerModel::HummerModel()
{
}


HummerModel::~HummerModel()
{
}

void HummerModel::run() {
	this->start();
	this->engineBoom();
	this->alarm();
	this->stop();
}