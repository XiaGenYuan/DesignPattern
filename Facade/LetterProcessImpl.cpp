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
	cout << "��д�ŵ�����:" << context << endl;
}

void LetterProcessImpl::FillEnvelope(string address) {
	cout << "��д�����˺������˵ĵ�ַ����Ϣ:" << address << endl;
}

void LetterProcessImpl::LetterInotoEnvelope(){
	cout << "���ŷŽ��ŷ�����" << endl;
}

void LetterProcessImpl::SendLetter() {
	cout << "�ʵ��ż�" << endl;
}