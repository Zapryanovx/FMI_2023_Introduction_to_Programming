/*#include <iostream>

bool isSecNumInFirstNumBinary(int n, int k);

int main()
{

	int n = 0;
	int k = 0;

	std::cin >> n >> k;

	if (isSecNumInFirstNumBinary(n, k))
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}

	return 0;
}

bool isSecNumInFirstNumBinary(int n, int k)
{

	for (int i = 0; i < sizeof(n) * 8; i++)
	{	
		if (((n >> i) & k) == k)
		{

			return true;
		}
	}

	return false;
}
*/