/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2023/2024
*
* @author Ilian Zapryanov
* @idnumber 8MI0600405
* @task 2
*
*/

/*#include <iostream>

bool isInputValid(int n, int arr[]);

int main()
{

	const int MAX_SIZE = 1000;
	int n = 0;
	int arr[MAX_SIZE] = {};
	std::cin >> n;

	if (isInputValid(n, arr)) 
	{
		int minPopulationInfo[MAX_SIZE][2] = {};
		int indexCounter = -1;
		int minPopulation = 0;
		for (int i = 0; i < n; i++)
		{

			if (arr[i] < 0) 
			{
				continue;
			}

			indexCounter++;
			minPopulationInfo[indexCounter][0]++;
			minPopulationInfo[indexCounter][1] = arr[i];
			minPopulation += arr[i] + 1;

			for (int j = i + 1; j < n; j++)
			{
				if (arr[i] == arr[j]) 
				{

					if (minPopulationInfo[indexCounter][0] == minPopulationInfo[indexCounter][1] + 1) 
					{
						indexCounter++;
					}

					minPopulationInfo[indexCounter][0]++;
					minPopulationInfo[indexCounter][1] = arr[j];
					arr[j] = -1;
				}
			}
		}

		std::cout << minPopulation << std::endl;
	}
	
	return 0;
}

bool isInputValid(int n, int arr[]) 
{

	if (!(n >= 1 && n <= 1000)) 
	{
		std::cout << "Incorrect input" << std::endl;
		return false;
	}

	for (int i = 0; i < n; i++)
	{

		std::cin >> arr[i];
		if(!(arr[i]>=0 && arr[i] <= 1000))
		{

			std::cout << "Incorrect input" << std::endl;
			return false;
		}
	}

	return true;
}/*