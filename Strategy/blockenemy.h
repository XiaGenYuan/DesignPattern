#pragma once
#include "strategy.h"
class BlockEnemy :
	public Strategy
{
public:
	BlockEnemy();
	virtual ~BlockEnemy();
	void operate();
};

