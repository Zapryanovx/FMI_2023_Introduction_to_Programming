/*#include <iostream>

const int MAX_SIZE = 10;

int main()
{
	int matrix[MAX_SIZE][MAX_SIZE] = {};
	int n = 0, s = 0;
	std::cin >> n >> s;

	int sum = 0;
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < n; j++)
		{
			std::cin >> matrix[i][j];
			if (i + j == s)
			{
				sum += matrix[i][j];
			}
		}
	}
	std::cout << sum << std::endl;

	return 0;
}*/