/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2023/2024
*
* @author Ilian Zapryanov
* @idnumber 8MI0600405
* @task 1
*
*/

#include <iostream>

bool isInputValid(int n, int k);
int countDivisorsOfNum(int number);

int main()
{

	int n = 0, k = 0;
	std::cin >> n >> k;

	if(isInputValid)
	{
		int pairCounter = 0;
		for (int domain = 1; domain <= n; domain++)
		{

			int domainDivisors = countDivisorsOfNum(domain);
			for (int range = domain; range <= n; range++)
			{

				int rangeDivisors = countDivisorsOfNum(range);
				if (k * domainDivisors * rangeDivisors == domain * range) 
				{
					pairCounter++;
				}
			}
		}

		std::cout << pairCounter << std::endl;
	}

	return 0;
}

int countDivisorsOfNum(int number) 
{

	int counter = 1;
	for (int i = 1; i <= number / 2; i++)
	{

		if (number % i == 0)
		{
			counter++;
		}
	}
	
	return counter;
}

bool isInputValid(int n, int k)
{
	
	if (n < 0 || k < 0) 
	{
		std::cout << "Incorrect input" << std::endl;
		return false;
	}

	return true;
}