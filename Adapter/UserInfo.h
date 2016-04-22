#pragma once
#include <string>
using std::string;

class UserInfo
{
public:
	UserInfo();
	virtual ~UserInfo();

	virtual string GetUserName() = 0;
	virtual string GetHomeAddresss() = 0;
	virtual string GetMobileNumber() = 0;
	virtual string GetOfficeTelNumber() = 0;
	virtual string GetJobPosition() = 0;
	virtual string GetHomeTelNumber() = 0;
};

