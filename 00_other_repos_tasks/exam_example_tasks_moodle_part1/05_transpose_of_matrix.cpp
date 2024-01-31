#include <iostream>

int** getTransponseOfMatrix(int n, int** matrix);

int main()
{
	int n = 3;
	int** matrix = new int* [n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			matrix[i][j] = i + j;
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

    int **transposedMatrix = getTransponseOfMatrix(n, matrix);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << transposedMatrix[i][j] << " ";
		}
		std::cout << std::endl;
	}

	/*for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;


	for (int i = 0; i < n; i++)
	{
		delete[] transposedMatrix[i];
	}
	delete[] transposedMatrix;*/

	return 0;
}

int **getTransponseOfMatrix(int n, int** matrix)
{
	int **transposedMatrix = new int* [n];

	for (int i = 0; i < n; i++)
	{
		transposedMatrix[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			transposedMatrix[i][j] = matrix[j][i];
		}
	}

	return transposedMatrix;
}