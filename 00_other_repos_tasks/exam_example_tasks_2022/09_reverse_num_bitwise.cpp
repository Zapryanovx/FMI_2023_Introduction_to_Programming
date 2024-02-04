#include <iostream>

unsigned short int reverseBitwise(unsigned short int n);

int main()
{
	unsigned short int n = 0;
	std::cin >> n;

	std::cout << reverseBitwise(n);

	return 0;
}

unsigned short int reverseBitwise(unsigned short int n)
{
	int nReversed = 0;

	for (int i = 0; i < 8; i++)
	{
		nReversed = nReversed << 1;
		nReversed = nReversed | (n & 1);
		n = n >> 1;
	}

	return nReversed;
}