/*#include <iostream>

void sumOfPrimeNumbers(int start, int end);
bool isPrime(int n);

int main() {
	
	int n = 0, m = 0;
	std::cin >> n >> m;
	sumOfPrimeNumbers(n, m);

	return 0;
}


void sumOfPrimeNumbers(int start, int end) {

	int sum = 0;

	for (int i = start; i <= end; i++) {
		bool isPrime = true;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}

		}
		if (isPrime) {
			sum += i;
		}
	}
	std::cout << sum << std::endl;
}*/