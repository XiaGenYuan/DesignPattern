#include "Emperors.h"
#include <iostream>
int Emperors::max_num_of_emperors_ = 2;
int Emperors::cur_emperor_ = 0;
vector<string> Emperors::emperor_names_ = vector<string>(max_num_of_emperors_);
vector<Emperors *> Emperors::emperors = vector<Emperors *>(max_num_of_emperors_);


Emperors::Emperors()
{
}


Emperors::~Emperors()
{
}

Emperors::Emperors(int index, string name) {
	emperor_names_[index] = name;
}


Emperors *Emperors::GetInstance() {
	cur_emperor_ = rand() % max_num_of_emperors_;
	return emperors[cur_emperor_];
}

void Emperors::EmperorInfo() {
	std::cout << emperor_names_[cur_emperor_] << std::endl;
}

void Emperors::Init() {
	for (int i = 0; i < max_num_of_emperors_; ++i) {
		string name = "我是第";
		name.push_back(i + '0');
		name.append("个皇帝");
		emperors[i] = new Emperors(i, name);
	}
}