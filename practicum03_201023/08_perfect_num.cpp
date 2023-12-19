#include <iostream>

int main() {

	int n = 0;
	std::cin >> n;
	
	int sumOfDevisors = 0;
	int numOfDevisors = 0;
	
	for (int i = 1; i <= n; i++) 
	{
		for (int j = 1; j <= i; j++) 
		{
			if (i % j == 0 &&  j != i) {
				sumOfDevisors += j;
			}

		}
		if (sumOfDevisors == i) {
			std::cout << i << " ";
		}
		sumOfDevisors = 0;
	}
		
	return 0;
}