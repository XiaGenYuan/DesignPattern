#pragma once
#include <string>
using std::string;
class LetterProcess;

class ModenPostOffice
{
public:
	ModenPostOffice();
	virtual ~ModenPostOffice();
	void SendLetter(string context, string address);

private:
	LetterProcess *letter_process;
};

