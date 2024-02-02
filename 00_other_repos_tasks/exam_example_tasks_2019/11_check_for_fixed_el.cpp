#include <iostream>

bool AnalyzeArr(int arr[], int length);

int main()
{
	int arr[5] = { 0, 1, 2, 3, 4 };
	int arrTwo[3] = { 1, 2, 2 };
	int arrThree[4] = { 1, 2, 2, 3};
	
	std::cout << AnalyzeArr(arr, 5) << std::endl;
	std::cout << AnalyzeArr(arrTwo, 3) << std::endl;
	std::cout << AnalyzeArr(arrThree, 4) << std::endl;
	std::cout << AnalyzeArr(NULL, 5) << std::endl;



	return 0;
}

bool AnalyzeArr(int arr[], int length)
{
	if (!arr)
	{
		return 0;
	}

	int fixedCounter = 0;
	for (int i = 0; i < length; i++)
	{
		if (i == arr[i])
		{
			fixedCounter++;
		}
	}

	if (fixedCounter >= 2)
	{
		return 1;
	}
	return 0;
}