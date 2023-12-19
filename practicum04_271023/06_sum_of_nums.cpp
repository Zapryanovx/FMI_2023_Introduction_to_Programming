#include <iostream>

int sumOfNums(int n);

int main() {

	int n = 0;
	std::cin >> n;
	std::cout << sumOfNums(n) << std::endl;
	return 0;
}

int sumOfNums(int n) {
	if (n < 0) {
		n = -n;
	}

	int digit = 0;
	int sum = 0;
	while (true) {

		if (n == 0) {
			if (sum < 10) {
				return sum;
			}
			n = sum;
			sum = 0;
			digit = 0;
		}
		digit = n % 10;
		n = n / 10;
		sum += digit;
		
	}
}