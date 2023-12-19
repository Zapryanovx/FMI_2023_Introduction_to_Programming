/*#include <iostream>

int main() {

	int binaryNum = 0;
	std::cin >> binaryNum;

	int digit = 1;
	int result = 0;
	int powerOfTwo = 1;
	int counter = 0;
	
	while (binaryNum != 0) {
		digit = binaryNum % 10; // 0 1 0 1 0 1
		binaryNum = binaryNum / 10; //10101 1010 101 10 1
		
		if (counter == 0) {
			result += digit; // result = 0
		}
		else {
			for (int i = 0; i < counter; i++) {
				powerOfTwo *= 2;
			}
			result += digit * powerOfTwo;
		}
		counter++;
		powerOfTwo = 1;
	}
	std::cout << result << std::endl;
	return 0;
}*/