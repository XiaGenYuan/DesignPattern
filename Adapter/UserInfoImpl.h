#pragma once
#include "UserInfo.h"
class UserInfoImpl :
	public UserInfo
{
public:
	UserInfoImpl();
	virtual ~UserInfoImpl();

	string GetUserName();
	string GetHomeAddresss();
	string GetMobileNumber();
	string GetOfficeTelNumber();
	string GetJobPosition();
	string GetHomeTelNumber();
};

