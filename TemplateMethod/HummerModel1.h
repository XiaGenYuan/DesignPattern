#pragma once
#include "HummerModel.h"
class HummerModel1 :
	public HummerModel
{
public:
	HummerModel1();
	virtual ~HummerModel1();

private:
	void start();
	void stop();
	void alarm();
	void engineBoom();
};

