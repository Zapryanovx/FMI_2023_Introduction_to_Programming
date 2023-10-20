/*#include <iostream>

int main() {

	int n = 0;
	std::cin >> n;

	bool isPrime = true;
	int devisorsCount = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0 && j != i && j != 1) {
				isPrime = false;
			}

		}
		if (isPrime) {
			std::cout << i << " ";
		}
		isPrime = true;
	}

	return 0;
}*/