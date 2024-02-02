//#include <iostream>
//
//double calculateMatrix(int** matr, int m);
//
//int main()
//{
//	const int MAX_SIZE = 5;
//	int ** matr = new int*[MAX_SIZE];
//
//	int m = 0;
//	std::cin >> m;
//	for (int row = 0; row < m; row++)
//	{
//		matr[row] = new int[m];
//		for (int col = 0; col < m; col++)
//		{
//			std::cin >> matr[row][col];
//		}
//	}
//
//	std::cout << calculateMatrix(matr, m);
//
//	return 0;
//}
//
//double calculateMatrix(int** matr, int m)
//{
//	double sum = 0;
//	for (int row = 0; row < m; row++)
//	{
//		for (int col = 0; col < m; col++)
//		{
//			if (row == col)
//			{
//				sum += matr[row][col];
//			}
//
//			else if (row + col == m - 1 && row != col)
//			{
//				sum += matr[row][col];
//			}
//		}
//
//	}
//
//	return sum;
//}