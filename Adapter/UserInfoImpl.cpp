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
	cout << "������Ա��������" << endl;
	return "������Ա��������";
}

string UserInfoImpl::GetHomeAddresss() {
	cout << "������Ա���ļ�ͥ��ַ" << endl;
	return "������Ա���ļ�ͥ��ַ";
}

string UserInfoImpl::GetMobileNumber() {
	cout << "������Ա�����ֻ�����" << endl;
	return "������Ա�����ֻ�����";
}

string UserInfoImpl::GetOfficeTelNumber() {
	cout << "������Ա���ĵİ칫�Һ���" << endl;
	return "������Ա���ĵİ칫�Һ���";
}

string UserInfoImpl::GetJobPosition() {
	cout << "������Ա����ְλ��Ϣ" << endl;
	return "������Ա����ְλ��Ϣ";
}

string UserInfoImpl::GetHomeTelNumber() {
	cout << "������Ա���ļ�ͥ��ϵ�绰" << endl;
	return "������Ա���ļ�ͥ��ϵ�绰";
}
