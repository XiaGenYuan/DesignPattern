#include "OutUserImpl.h"


OutUserImpl::OutUserImpl()
{
}


OutUserImpl::~OutUserImpl()
{
}


map<string, string> OutUserImpl::GetUserBaseInfo() {
	map<string, string> mp;
	mp["username"] = "���Ա���л���ħ��...";
	mp["mobilenumber"] = "���Ա���ĵ绰��...";
	return mp;
}

map<string, string> OutUserImpl::GetUserHomeInfo() {
	map<string, string> mp;
	mp["hometelnumber"] = "Ա���ļ�ͥ�绰��...";
	mp["homeaddress"] = "Ա���ļ�ͥ��ַ��...";
	return mp;
}

map<string, string> OutUserImpl::GetUserOfficeInfo(){
	map<string, string> mp;
	mp["jobposition"] = "����˵�ְλ��BOSS...";
	mp["officetelnumber"] = "Ա���İ칫�绰��...";
	return mp;
}