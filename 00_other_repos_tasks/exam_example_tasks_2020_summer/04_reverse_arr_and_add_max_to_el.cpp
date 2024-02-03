//#include <iostream>
//
//void convertMax(int* arr, int N);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	int arr[MAX_SIZE] = {};
//
//	int N = 0;
//	std::cin >> N;
//	
//	for (int i = 0; i < N;i++)
//	{
//		std::cin >> arr[i];
//	}
//
//	convertMax(arr, N);
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cout << arr[i] << " ";
//	}
//
//
//	return 0;
//}
//
//void convertMax(int* arr, int N)
//{
//	int maxEl = arr[0];
//	for (int i = 0; i < N; i++)
//	{
//		if (maxEl < arr[i])
//		{
//			maxEl = arr[i];
//		}
//	}
//
//	for (int i = 0; i < N / 2; i++)
//	{
//		if (arr[i] != maxEl)
//		{
//			arr[i] += maxEl;
//		}
//
//		if (arr[N - i - 1] != maxEl)
//		{
//			arr[N - i - 1] += maxEl;
//		}
//
//		int temp = arr[i];
//		arr[i] = arr[N - i - 1];
//		arr[N - i - 1] = temp;
//	}
//}