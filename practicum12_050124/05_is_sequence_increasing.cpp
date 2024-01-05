//#include <iostream>
//
//bool isIncreasing(int arr[], int index);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	int arr[MAX_SIZE] = {};
//
//	int size = 0;
//	std::cin >> size;
//
//	for (int i = 0; i < size; i++)
//	{
//		std::cin >> arr[i];
//
//	}
//
//	std::cout << isIncreasing(arr, size - 1) << std::endl; // 1 if true, 0 if not
//
//	return 0;
//}
//
//bool isIncreasing(int arr[], int index)
//{
//	if (index == 0)
//	{
//		return true;
//	}
//	
//	if (arr[index] < arr[index - 1])
//	{
//		return false;
//	}
//
//
//	isIncreasing(arr, index - 1);
//}