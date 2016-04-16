#pragma once
#include "Star.h"
class ShishiAgent :
	public Star
{
public:
	ShishiAgent();
	virtual ~ShishiAgent();
	void SetStar(Star *star);
	void JoininShow();
	void PlayAds();

private:
	Star *star_;
};

