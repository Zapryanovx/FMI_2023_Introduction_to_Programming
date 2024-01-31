//#include <iostream>
//
//void printRectangle(int n, int m, char ch);
//
//int main()
//{
//
//	int n = 10;
//	int m = 10;
//	printRectangle(n, m, 'X');
//
//	return 0;
//}
//
//void printRectangle(int n, int m, char ch)
//{
//	const int ROWS = 25;
//	const int COLS = 80;
//
//	for (int i = 0; i < (ROWS - n) / 2; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			std::cout << " ";
//		}
//		std::cout << std::endl;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			if (j <= (COLS - m) / 2 || j > (COLS - m) / 2 + m)
//			{
//				std::cout << " ";
//			}
//
//			else
//			{
//				std::cout << ch;
//			}
//		}
//		std::cout << std::endl;
//	}
//
//	for (int i = 0; i < (ROWS - n) / 2; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			std::cout << " ";
//		}
//		std::cout << std::endl;
//	}
//}
