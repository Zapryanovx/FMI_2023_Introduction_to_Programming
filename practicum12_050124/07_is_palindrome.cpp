//#include <iostream>
//
//bool isKInNum(char arr[], int leftIndex, int rightIndex, int size);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	char arr[MAX_SIZE] = "";
//
//	std::cin.getline(arr, MAX_SIZE);
//
//	int size = 0;
//	while (arr[size])
//	{
//			size++;
//	}
//
//	std::cout << isKInNum(arr, 0, size - 1, size) << std::endl; // 1 if true, 0 if not
//
//	return 0;
//}
//
//bool isKInNum(char arr[], int leftIndex, int rightIndex, int size)
//{
//	if (leftIndex == size / 2)
//	{
//		return true;
//	}
//
//	if (arr[leftIndex] != arr[rightIndex])
//	{
//		return false;
//	}
//
//
//	isKInNum(arr, leftIndex + 1, rightIndex - 1, size);
//}