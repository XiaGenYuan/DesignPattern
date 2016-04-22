#include <iostream>
#include <string>
using std::string;
#include "ModenPostOffice.h"
using namespace std;

int main() {
	ModenPostOffice office;
	string context = "Hello, It's me, do you know who I am? I'm you old lover";
	string address = "Tsinghua University, Haidian Zone, Beijing";
	office.SendLetter(context, address);
	return 0;
}