/*#include <iostream>

const int MAX_SIZE = 10;

int main() 
{
	int matrix[MAX_SIZE][MAX_SIZE] = {};
	int n = 0, m = 0;
	std::cin >> n >> m;

	bool isContain = false;
	for (int i = 0; i < n; i++) 
	{
		
		for (int j = 0; j < m; j++) 
		{
			std::cin >> matrix[i][j];
			if (matrix[i][j] < 0) 
			{
				isContain = true;
			}
		}
	}

	if (isContain)
	{
		std::cout << "Yes" << std::endl;
	}
	else
	{
		std::cout << "No" << std::endl;
	}

	return 0;
}*/