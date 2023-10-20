#include <iostream>

int main() {

	int n = 0;
	std::cin >> n;

	int maxNum = 0;
	int minNum = 0;
	int num = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> num;
		if (i == 0) {
			minNum = num;
			maxNum = num;
		}
		if(num > maxNum){
			maxNum = num;
		}
		if (num <= minNum) {
			minNum = num;
		}
	}
	std::cout << "Min: " << minNum << std::endl;
	std::cout << "Max: " << maxNum << std::endl;

	return 0;
}