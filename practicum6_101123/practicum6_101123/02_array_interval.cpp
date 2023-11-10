/*#include <iostream>

void intervalSort(int array[], int arraySize, int result[], int a, int b);
void printArray(int result[], int indexResult);

int main() {

	int array[1000] = {};
	int result[1000] = {};

	int arraySize = 0;
	std::cin >> arraySize;

	for (int i = 0; i < arraySize; i++) {
		std::cin >> array[i];
	}

	int a = 0;
	int b = 0;
	std::cin >> a >> b;

	intervalSort(array, arraySize, result, a, b);


	return 0;
}
void intervalSort(int array[], int arraySize, int result[], int a, int b) {

	int indexResult = 0;
	for (int i = 0; i < arraySize; i++) {
		if (array[i] > a && array[i] < b) {
			result[indexResult] = array[i];
			indexResult++;
		}
	}

	printArray(result, indexResult);
}

void printArray(int result[], int indexResult) {

	for (int i = 0; i < indexResult; i++) {
		std::cout << result[i] << " ";
	}
}*/