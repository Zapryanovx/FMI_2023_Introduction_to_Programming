#include <iostream>

int main() {

	int n = 0, m = 0;
	std::cin >> n >> m;

	int power = 1;
	int result = 0;
	for (int i = 1; i < m; i++) {
		power *= n;
	}
	result += n * power;

	std::cout << result << std::endl;
	return 0;
}