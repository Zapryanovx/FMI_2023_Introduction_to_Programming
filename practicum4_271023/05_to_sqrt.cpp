#include <iostream>

int toSqrt(int n);

int main() {

	int n = 0;
	std::cin >> n;
	std::cout << toSqrt(n) << std::endl;;

	return 0;
}

int toSqrt(int n) {
	
	int maxSqrt = 0;
	for (int i = 0; i <= n; i++) {
		if (i * i > n) {
			return i - 1;
		}
	}
}