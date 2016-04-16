#pragma once
#include <vector>
#include <string>
using std::vector;
using std::string;
class Emperors
{
public:
	virtual ~Emperors();
	static Emperors *GetInstance();
	static void EmperorInfo();
	static void Init();

private:
	Emperors();
	Emperors(int index, string name);
	static int max_num_of_emperors_;
	static int cur_emperor_;
	static vector<string> emperor_names_;
	static vector<Emperors *> emperors;
};

