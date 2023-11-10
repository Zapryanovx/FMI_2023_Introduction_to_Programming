/**#include <iostream>

void isSumN(int n);

int main() {

	int n = 0;
	std::cin >> n;
	isSumN(n);

	return 0;
}

void isSumN(int n) {

	int a = 0, b = 0;

	for (int i = 0; i < n; i++) {
		std::cin >> a >> b;
		if (a + b == n) {
			std::cout << "Yes ";
		}
		else std::cout << "No ";
	}
	
	return;
}*/
