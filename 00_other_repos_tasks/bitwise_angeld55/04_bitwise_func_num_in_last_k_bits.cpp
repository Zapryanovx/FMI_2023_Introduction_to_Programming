/*#include <iostream>

void numInLastKBits(int n, int k);

int main()
{

	int n = 0;
	int k = 0;

	std::cin >> n >> k;

	numInLastKBits(n, k);

	return 0;
}

void numInLastKBits(int n, int k)
{
	std::cout << (n & (0xffffffff >> sizeof(n) * 8 - k)) << std::endl;
}

*/