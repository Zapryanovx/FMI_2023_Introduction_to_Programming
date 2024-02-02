#include <iostream>

int** mergearrays(int* arrOne, int* arrTwo, int m);

int main()
{
	int arrOne[5] = { 1, 2, 3, 4, 5 };
	int arrTwo[5] = { 5, 4, 3, 2, 1 };

	int** ptr = mergearrays(arrOne, arrTwo, 5);
	for (int i = 0; i < 2; i++)
	{
		std::cout << "{ ";
		for (int j = 0; j < 5; j++)
		{
			std::cout << ptr[i][j] << " ";
		}
		std::cout << "} ";
	}

	return 0;
}

int** mergearrays(int* arrOne, int* arrTwo, int m)
{
	int** mergedArrays = new int* [2];

	mergedArrays[0] = new int[m];
	for (int i = 0; i < m; i++)
	{
		mergedArrays[0][i] = arrOne[i];
	}

	mergedArrays[1] = new int[m];
	for (int j = 0; j < m; j++)
	{
		mergedArrays[1][j] = arrTwo[j];
	}

	return mergedArrays;

}