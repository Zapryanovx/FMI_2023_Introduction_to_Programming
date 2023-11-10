/*#include <iostream>


void deleteEl(int arr[], const int size, int index);
void printArray(int arr[], const int size);

int main() {
	
	int arr[1000] = {};
	int arrSize = 0;
	std::cin >> arrSize;

	for (int i = 0; i < arrSize; i++) {
		std::cin >> arr[i];
	}

	int index = 0;
	std::cin >> index;

	deleteEl(arr, arrSize, index - 1);

	return 0;
}

void deleteEl(int arr[], int size, int index) {

	for (int i = index; i < size; i++) {
		arr[i] = arr[i + 1];
	}
	printArray(arr, size);

}

void printArray(int arr[], int arrSize) {
	
	for (int i = 0; i < arrSize - 1; i++) {
		std::cout << arr[i]<< " ";
	}

}
*/
