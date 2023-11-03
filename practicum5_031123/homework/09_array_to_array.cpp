#include <iostream>

int main() {

	const int SIZE = 5;
	int arr1[SIZE] = {};
	int arr2[SIZE] = {};
	bool isDependent = true;
	
	for (int i = 0; i < SIZE; i++) {
		std::cin >> arr1[i];
	}

	for (int i = 0; i < SIZE; i++) {
		std::cin >> arr2[i];
	}

	for (int i = 1; i < SIZE; i++) {
		if (arr2[i - 1] / arr1[i - 1] != arr2[i] / arr1[i]) {
			isDependent = false;
		}
	}

	if (isDependent) {
		std::cout << "Yes";
	}
	else {
		std::cout << "No";
	}

	return 0;
}