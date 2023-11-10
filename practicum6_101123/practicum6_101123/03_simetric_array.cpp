/*#include <iostream>

bool isSimetric(int array[], int arraySize);

int main() {

	int array[1000] = {};

	int arraySize = 0;
	std::cin >> arraySize;

	for (int i = 0; i < arraySize; i++) {
		std::cin >> array[i];
	}

	if (isSimetric(array, arraySize)) {
		std::cout << "yes";
	}
	else std::cout << "no";

	return 0;
}

bool isSimetric(int array[], int arraySize) {

	for (int i = 0; i < arraySize / 2; i++) {
		if (array[i] != array[arraySize - i - 1]) {
			return false;
		}
	}
	return true;

}*/