//#include <iostream>
//
//int* newArr(int* arr, int len);
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
//	/*int* ptr = newArr(arr, len);
//	for (int i = 0; i < 4; i++)
//	{
//		std::cout << *(ptr + i) << " ";
//	}
//	
//	delete[] ptr;*/
//
//	return 0;
//}
//
//int* newArr(int* arr, int len)
//{
//	int average = 0;
//	int sum = 0;
//	for (int i = 0; i < len; i++)
//	{
//		sum += arr[i];
//	}
//
//	average = sum / len;
//
//	int* evenArr = new int[len];
//	int evenIdx = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			evenArr[evenIdx++] = arr[i] + average;
//		}
//	}
//
//	return evenArr;
//}