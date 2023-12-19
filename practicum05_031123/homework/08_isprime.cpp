#include <iostream>

bool isPrime(int el);

int main() {

	const int SIZE = 10;
	int arr[SIZE] = {};
	int prime_counter = 0;

	for (int i = 0; i < SIZE; i++) {
		std::cin >> arr[i];
	}

	for (int i = 0; i < SIZE; i++) {
		if (isPrime(arr[i])) {
			prime_counter++;
		}
	}

	std::cout << prime_counter;

	return 0;
}

bool isPrime(int el) {

	if (el == 1)
		return false;

	for (int i = 2; i < el; i++) {
		if (el % i == 0) {
			return false;
		}
	}

	return true;
}