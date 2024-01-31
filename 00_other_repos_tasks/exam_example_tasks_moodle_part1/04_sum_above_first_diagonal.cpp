//#include <iostream>
//
//int sumOfNumsAboveFirstDiagonal(int n, int** matrix);
//
//int main()
//{
//	int n = 3;
//	int** matrix = new int*[n];
//	
//	for (int i = 0; i < n; i++)
//	{
//		matrix[i] = new int[n];
//		for (int j = 0; j < n; j++)
//		{
//			matrix[i][j] = i + j;
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			std::cout<<matrix[i][j]<< " ";
//		}
//		std::cout << std::endl;
//	}
//
//	std::cout << sumOfNumsAboveFirstDiagonal(n, matrix);
//
//	//for (int i = 0; i < n; i++)
//	//{
//	//	delete[] matrix[i];
//	//}
//	//delete[] matrix;
//
//	return 0;
//}
//
//int sumOfNumsAboveFirstDiagonal(int n, int** matrix)
//{
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i <= j)
//			{
//				sum += matrix[i][j];
//			}
//		}
//	}
//
//	return sum;
//}