#include <iostream>

void inputArray(int array[], int arraySize);
void outputArray(int array[], int arraySize);
void equalArrays(int array[], int arraySize, int arrayTwo[], int arrayTwoSize, int result[]);
void bubbleSort(int result[], int resultSize);
void selectionSort(int result[], int resultSize);
void insertionSort(int result[], int resultSize);


int main() {

	int array[1000] = {};
	int arraySize = 0;
	std::cin >> arraySize;
	inputArray(array, arraySize);

	int arrayTwo[1000] = {};
	int arrayTwoSize = 0;
	std::cin >> arrayTwoSize;
	inputArray(arrayTwo, arrayTwoSize);

	int result[1000] = {};
	equalArrays(array, arraySize, arrayTwo, arrayTwoSize, result);

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

void equalArrays(int array[], int arraySize, int arrayTwo[], int arrayTwoSize, int result[]) {

	bool isInBothArrays = false;
	int resultSize = 0;
	for (int i = 0; i < arrayTwoSize; i++) {
		for (int j = 0; j < arraySize; j++) {
			if (array[i] == arrayTwo[j]) {
				isInBothArrays = true;
			}
		}
		if (isInBothArrays) {
			result[resultSize] = array[i];
			resultSize++;
		}
		isInBothArrays = false;
	}

	bubbleSort(result, resultSize);
	selectionSort(result, resultSize);
	insertionSort(result, resultSize);

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
}

void selectionSort(int result[], int resultSize) {

	int minIndex = 0;
	for (int i = 0; i < resultSize; i++) {

		minIndex = i;
		for (int j = i + 1; j < resultSize; j++) {
			if (result[j] < result[minIndex]) {
				minIndex = j;
			}
		}

		if (minIndex != i) {
			std::swap(result[minIndex], result[i]);
		}
	}

	outputArray(result, resultSize);
}


void insertionSort(int result[], int resultSize) {

	int key = 0;
	int j = 0;
	for (int i = 1; i < resultSize; i++) {
		key = result[i];
		j = i - 1;

		while (j >= 0 && result[j] > key) {
			result[j + 1] = result[j];
			j--;
		}
		result[j + 1] = key;
	}

	outputArray(result, resultSize);
}