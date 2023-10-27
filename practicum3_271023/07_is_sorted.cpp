/*#include <iostream>

bool isSorted(int n);

int main() {

	int n = 0;
	std::cin >> n;

	if(isSorted(n)){
		std::cout << "True" << std::endl;
	}
	else {
		std::cout << "False" << std::endl;
	}
	return 0;
}

bool isSorted(int n) {
	
	if (n < 0) {
		n = -n;
	}

	int digit = n % 10;
	while (n != 0) {

		n = n / 10;
		if (digit > n % 10) {
			digit = n % 10;
		}
		else {
			return false;
		}
	}
	return true;
}*/
