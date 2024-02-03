//#include <iostream>
//
//int** splitArr(int* arr, int M);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	int arr[MAX_SIZE] = {};
//
//	int M = 0;
//	std::cin >> M;
//	for (int i = 0; i < M; i++)
//	{
//		std::cin >> arr[i];
//	}
//
//	int** ptr = splitArr(arr, M);
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			std::cout << ptr[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//
//	for (int i = 0; i < M; i++)
//	{
//		delete[] ptr[i];
//	}
//	delete[] ptr;
//	
//	return 0;
//}
//
//int** splitArr(int* arr, int M)
//{
//	int average = 0;
//	int sum = 0;
//	for (int i = 0; i < M; i++)
//	{
//		sum += arr[i];
//	}
//
//	average = sum / M;
//	
//	int** pairs = new int* [M];
//	for (int i = 0; i < M; i++)
//	{
//		pairs[i] = new int[2];
//		pairs[i][0] = arr[i];
//		pairs[i][1] = average;
//	}
//
//	return pairs;
//}