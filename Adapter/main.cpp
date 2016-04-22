#include <iostream>
#include "OutUserInfo.h"
using namespace std;

int main() {
	UserInfo *younggirl = new OutUserInfo();
	cout << younggirl->GetMobileNumber() << endl;
	return 0;
}