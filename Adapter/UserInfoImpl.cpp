#include "UserInfoImpl.h"
#include <iostream>
using std::cout;
using std::endl;


UserInfoImpl::UserInfoImpl()
{
}


UserInfoImpl::~UserInfoImpl()
{
}

string UserInfoImpl::GetUserName() {
	cout << "这里是员工的姓名" << endl;
	return "这里是员工的姓名";
}

string UserInfoImpl::GetHomeAddresss() {
	cout << "这里是员工的家庭地址" << endl;
	return "这里是员工的家庭地址";
}

string UserInfoImpl::GetMobileNumber() {
	cout << "这里是员工的手机号码" << endl;
	return "这里是员工的手机号码";
}

string UserInfoImpl::GetOfficeTelNumber() {
	cout << "这里是员工的的办公室号码" << endl;
	return "这里是员工的的办公室号码";
}

string UserInfoImpl::GetJobPosition() {
	cout << "这里是员工的职位信息" << endl;
	return "这里是员工的职位信息";
}

string UserInfoImpl::GetHomeTelNumber() {
	cout << "这里是员工的家庭联系电话" << endl;
	return "这里是员工的家庭联系电话";
}
