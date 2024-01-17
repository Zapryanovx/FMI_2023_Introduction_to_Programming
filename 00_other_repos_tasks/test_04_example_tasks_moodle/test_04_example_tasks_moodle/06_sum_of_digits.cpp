#include <iostream>

int getSumOfDigits(int n);

int main()
{
	int a = 1;
	int b = 41;
	int c = 41204;

	std::cout << getSumOfDigits(a) << " ";
	std::cout << getSumOfDigits(b) << " ";
	std::cout << getSumOfDigits(c) << " ";

	return 0;
}

int getSumOfDigits(int n)
{
	int sumOfDigits = 0;
	while (n)
	{
		sumOfDigits += n % 10;
		n = n / 10;
	}

	return sumOfDigits;
}