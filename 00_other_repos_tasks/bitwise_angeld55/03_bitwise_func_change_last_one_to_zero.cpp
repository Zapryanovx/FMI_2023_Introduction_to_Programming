/*#include <iostream>

void changeLastOneBit(int& n);

int main()
{
	
	int n = 0;
	std::cin >> n;

	//std::cout << std::hex << n << std::endl;
	changeLastOneBit(n);
	
	//std::cout << std::hex << n << std::endl;
	std::cout << n << std::endl;
}

void changeLastOneBit(int& n)
{
	for (int i = 0; i < sizeof(n) * 8; i++)
	{
		if (n >> i & 1)
		{
			n ^= (1 << i);
			break;
		}
	}
}
*/