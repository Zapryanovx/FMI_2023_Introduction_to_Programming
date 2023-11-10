/*#include <iostream>

void inputArray(int array[], int arraySize);
void outputArray(int array[], int arraySize);
void uniteArrays(int array[], int arraySize, int arrayTwo[], int arrayTwoSize, int result[]);
void bubbleSort(int result[], int resultSize);

int main() {

	int array[1000] = {};
	int arraySize = 0;
	std::cin >> arraySize;
	inputArray(array,arraySize);

	int arrayTwo[1000] = {};
	int arrayTwoSize = 0;
	std::cin >> arrayTwoSize;
	inputArray(arrayTwo, arrayTwoSize);

	int result[1000] = {};
	uniteArrays(array, arraySize, arrayTwo, arrayTwoSize, result);

	return 0;
}


void inputArray(int array[], int arraySize) {
	for (int i = 0; i < arraySize; i++) {
		std::cin >> array[i];
	}
}

void outputArray(int array[], int arraySize) {
	for (int i = 0; i < arraySize; i++) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}

void uniteArrays(int array[], int arraySize, int arrayTwo[], int arrayTwoSize, int result[]) {



	for (int i = 0; i < arraySize; i++) {
		result[i] = array[i];
	}

	bool isNotInArray = true;
	int resultSize = arraySize;
	for (int i = 0; i < arrayTwoSize; i++) {
		for (int j = 0; j < arraySize; j++) {
			if (arrayTwo[i] == array[j]) {
				isNotInArray = false;
			}
		}
		if (isNotInArray) {
			result[resultSize] = arrayTwo[i];
			resultSize++;
		}
		isNotInArray = true;
	}

	bubbleSort(result, resultSize);
}

void bubbleSort(int result[], int resultSize) {

	for (int i = 0; i < resultSize - 1; i++) {
		for (int j = 0; j < resultSize - i - 1; j++) {
			if (result[j] > result[j + 1]) {
				std::swap(result[j], result[j + 1]);
			}
		}
	}

	outputArray(result, resultSize);
}*/