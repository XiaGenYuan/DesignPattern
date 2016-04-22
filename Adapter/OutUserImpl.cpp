#include "OutUserImpl.h"


OutUserImpl::OutUserImpl()
{
}


OutUserImpl::~OutUserImpl()
{
}


map<string, string> OutUserImpl::GetUserBaseInfo() {
	map<string, string> mp;
	mp["username"] = "这个员工叫混世魔王...";
	mp["mobilenumber"] = "这个员工的电话是...";
	return mp;
}

map<string, string> OutUserImpl::GetUserHomeInfo() {
	map<string, string> mp;
	mp["hometelnumber"] = "员工的家庭电话是...";
	mp["homeaddress"] = "员工的家庭地址是...";
	return mp;
}

map<string, string> OutUserImpl::GetUserOfficeInfo(){
	map<string, string> mp;
	mp["jobposition"] = "这个人的职位是BOSS...";
	mp["officetelnumber"] = "员工的办公电话是...";
	return mp;
}