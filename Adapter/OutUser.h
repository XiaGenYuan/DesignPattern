#pragma once
#include <map>
#include <string>
using std::map;
using std::string;
class OutUser
{
public:
	OutUser();
	virtual ~OutUser();

	virtual map<string, string> GetUserBaseInfo() = 0;
	virtual map<string, string> GetUserHomeInfo() = 0;
	virtual map<string, string> GetUserOfficeInfo() = 0;
};

