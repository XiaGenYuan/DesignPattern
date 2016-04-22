#include "LetterProcessImpl.h"
#include <iostream>
using std::cout;
using std::endl;


LetterProcessImpl::LetterProcessImpl()
{
}


LetterProcessImpl::~LetterProcessImpl()
{
}


void LetterProcessImpl::WriteContext(string context) {
	cout << "填写信的内容:" << context << endl;
}

void LetterProcessImpl::FillEnvelope(string address) {
	cout << "填写寄信人和收信人的地址和信息:" << address << endl;
}

void LetterProcessImpl::LetterInotoEnvelope(){
	cout << "把信放进信封里面" << endl;
}

void LetterProcessImpl::SendLetter() {
	cout << "邮递信件" << endl;
}