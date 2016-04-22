#pragma once
#include "HummerModel.h"
class HummerModel2 :
	public HummerModel
{
public:
	HummerModel2();
	virtual ~HummerModel2();

private:
	void start();
	void stop();
	void alarm();
	void engineBoom();
};

