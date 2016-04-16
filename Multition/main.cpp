#include <iostream>
#include "Emperors.h"

int main() {
	int num_of_minister = 10;
	Emperors::Init();
	for (int i = 0; i < 10; ++i) {
		Emperors *emperor = Emperors::GetInstance();
		emperor->EmperorInfo();
	}
	return 0;
}