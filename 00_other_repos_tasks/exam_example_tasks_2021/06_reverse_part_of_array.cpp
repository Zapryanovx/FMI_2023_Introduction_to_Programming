//#include <iostream>
//
//int* revArr(int* arr, int len, int k);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	int arr[MAX_SIZE] = {};
//	
//	int len = 0;
//	std::cin >> len;
//	
//	for (int i = 0; i < len; i++)
//	{
//		std::cin >> arr[i];
//	}
//
//	int k = 0;
//	std::cin >> k;
//
//	int* ptr = revArr(arr, len, k);
//	for (int i = 0; i < len; i++)
//	{
//		std::cout << *(ptr + i) << " ";
//	}
//
//	return 0;
//}
//
//int* revArr(int* arr, int len, int k)
//{
//
//	int* reversedArr = new int[len];
//
//	int reversedArrIdx = 0;
//	for (int i = 0; i < k; i++)
//	{
//		reversedArr[reversedArrIdx++] = arr[i];
//	}
//
//	int j = 1;
//	for (int i = k; i < len; i++)
//	{
//		reversedArr[i] = arr[len - j];
//		j++;
//	}
//
//	return reversedArr;
//}