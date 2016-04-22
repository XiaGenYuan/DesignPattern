#pragma once
#include "LetterProcess.h"
class LetterProcessImpl :
	public LetterProcess
{
public:
	LetterProcessImpl();
	virtual ~LetterProcessImpl();

	void WriteContext(string context);
	void FillEnvelope(string address);
	void LetterInotoEnvelope();
	void SendLetter();
};

