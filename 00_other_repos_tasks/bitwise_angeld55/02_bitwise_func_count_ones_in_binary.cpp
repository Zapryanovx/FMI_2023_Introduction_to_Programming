/*#include <iostream>

int countOnesInBinary(int n);

int main()
{
	int n = 0;
	std::cin >> n;

	std::cout << countOnesInBinary(n);

	return 0;
}

int countOnesInBinary(int n)
{
	int counter = 0;
	for (int i = 0; i < sizeof(n) * 8; i++)
	{
		if (n >> i & 1)
		{
			counter++;
		}
	}

	return counter;
}
*/