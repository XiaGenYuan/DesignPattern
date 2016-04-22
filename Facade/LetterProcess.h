#pragma once
#include <string>
using std::string;

class LetterProcess
{
public:
	LetterProcess();
	virtual ~LetterProcess();

	virtual void WriteContext(string context) = 0;
	virtual void FillEnvelope(string address) = 0;
	virtual void LetterInotoEnvelope() = 0;
	virtual void SendLetter() = 0;
};

