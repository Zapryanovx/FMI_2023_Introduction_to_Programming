#include <iostream>

int findLongestSquence(int array[], int arraySize);

int main() {

	int array[1000] = {};

	int arraySize = 0;
	std::cin >> arraySize;

	for (int i = 0; i < arraySize; i++) {
		std::cin >> array[i];
	}

	std::cout<<findLongestSquence(array, arraySize);

	return 0;
}

int findLongestSquence(int array[], int arraySize) {

	int maxSeq = 1;
	int count = 1;
	for (int i = 0; i < arraySize - 1; i++) {
		if (array[i] == array[i + 1]) {
			count++;
		} 
		else {
			if (count > maxSeq) {
				maxSeq = count;
			
			}
			count = 1;
		}
		std::cout << count<<" ";
	}

	if (maxSeq < count) {
		maxSeq = count;
	}

	std::cout << std::endl;

	return maxSeq;
}