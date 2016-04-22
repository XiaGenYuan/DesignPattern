#include "OutUserInfo.h"


OutUserInfo::OutUserInfo()
{
	baseInfo = this->GetUserBaseInfo();
	homeInfo = this->GetUserHomeInfo();
	officeInfo = this->GetUserOfficeInfo();
}


OutUserInfo::~OutUserInfo()
{
}


string OutUserInfo::GetUserName(){
	return baseInfo["username"];
}

string OutUserInfo::GetHomeAddresss(){
	return homeInfo["homeaddress"];
}

string OutUserInfo::GetMobileNumber(){
	return baseInfo["mobilenumber"];
}

string OutUserInfo::GetOfficeTelNumber(){
	return officeInfo["officetelnumber"];
}

string OutUserInfo::GetJobPosition(){
	return officeInfo["jobposition"];
}

string OutUserInfo::GetHomeTelNumber(){
	return homeInfo["hometelnumber"];
}
