#pragma once
#include "OutUser.h"
#include "UserInfo.h"
#include <string>
#include <map>
#include "OutUserImpl.h"
using std::map;
using std::string;

class OutUserInfo :
	public OutUserImpl, public UserInfo
{
public:
	OutUserInfo();
	virtual ~OutUserInfo();

	string GetUserName();
	string GetHomeAddresss();
	string GetMobileNumber();
	string GetOfficeTelNumber();
	string GetJobPosition();
	string GetHomeTelNumber();



private:
	map<string, string> baseInfo;
	map<string, string> homeInfo;
	map<string, string> officeInfo;
};

