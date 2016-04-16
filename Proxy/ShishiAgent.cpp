#include "ShishiAgent.h"


ShishiAgent::ShishiAgent()
{
}


ShishiAgent::~ShishiAgent()
{
}

void ShishiAgent::SetStar(Star *star) {
	this->star_ = star;
}

void ShishiAgent::JoininShow() {
	this->star_->JoininShow();
}

void ShishiAgent::PlayAds() {
	this->star_->PlayAds();
}
