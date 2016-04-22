#pragma once
#include "OutUser.h"
class OutUserImpl :
	public OutUser
{
public:
	OutUserImpl();
	virtual ~OutUserImpl();

	map<string, string> GetUserBaseInfo();
	map<string, string> GetUserHomeInfo();
	map<string, string> GetUserOfficeInfo();
};

