/*#include <iostream>

bool func(int& n, int& sum);

int main() {

	int n = 0;
	int sum = 0;
	std::cin >> n;
	sum = n;
	while (true) {
		std::cin >> n;
		if (func(n, sum)) {
			break;
		}
	}

	return 0;
}

bool func(int& n, int& sum) {
	if (n == sum)
		return true;

	sum += n;
	return false;
}*/