#include <iostream>

int main() {

	int arr[1000] = {};
	int max = 0;
	int sequence_counter = 1;
	int n = 0;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	for (int i = 1; i < n; i++) {
		if (arr[i] > arr[i - 1]) {
			sequence_counter++;
			continue;
		}

		if (max < sequence_counter) {
			max = sequence_counter;
			sequence_counter = 1;
		}

	}
	
	if (max == 0) {
		max = sequence_counter;
	}

	std::cout << max;

	return 0;
}