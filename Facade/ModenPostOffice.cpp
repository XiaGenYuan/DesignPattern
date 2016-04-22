#include "ModenPostOffice.h"
#include "LetterProcess.h"
#include "LetterProcessImpl.h"


ModenPostOffice::ModenPostOffice()
{
	letter_process = new LetterProcessImpl();
}


ModenPostOffice::~ModenPostOffice()
{
}


void ModenPostOffice::SendLetter(string context, string address) {
	letter_process->WriteContext(context);
	letter_process->FillEnvelope(address);
	letter_process->LetterInotoEnvelope();
	letter_process->SendLetter();
}