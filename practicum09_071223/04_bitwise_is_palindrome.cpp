/*#include <iostream>

int main()
{

	int a = 0x0f0ff0ff; //should be 0 
	std::cin >> a;

	bool isPalindrome = true;
	for (int i = 0; i < sizeof(a) * 8; i++) 
	{

		if (((a >> sizeof(a) * 8 - 1 - i) & 1) != ((a>>i) & 1))
		{
			isPalindrome = false;
		}
	}

	if (isPalindrome)
	{
		std::cout << "Yes";
	}
	else
	{
		std::cout << "No";
	}

	return 0;
}
*/