#include <iostream>
#include "HummerModel1.h"
#include "HummerModel2.h"
using namespace std;


int main() {
	HummerModel *h1 = new HummerModel1();
	HummerModel *h2 = new HummerModel2();
	h1->run();
	h2->run();
	return 0;
}
