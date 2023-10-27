#include <iostream>

void isRowEvenOrOdd(int n);

int main() {

	int n = 0;
	std::cin >> n;
	isRowEvenOrOdd(n);

	return 0;
}

void isRowEvenOrOdd(int n) {
	int eln = n * 3 / 2;
	int i = 1;
	for (i = 1; i < n; i++) {
		i = eln * 3 / 2;
		eln = i;
	}

	if (i % 2 == 0) {
		std::cout << "Even" << std::endl;
	}
	else {
		std::cout << "Odd" << std::endl;
	}
}