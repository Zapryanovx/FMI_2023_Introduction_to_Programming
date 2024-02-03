//#include <iostream>
//
//int* mergeArr(int* arr1, int* arr2, int len);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	int arr1[MAX_SIZE] = {};
//	int arr2[MAX_SIZE] = {};
//
//	int len = 0;
//	std::cin >> len;
//	
//	for (int i = 0; i < len; i++)
//	{
//		std::cin >> arr1[i];
//	}
//	 
//	for (int i = 0; i < len; i++)
//	{
//		std::cin >> arr2[i];
//	}
//
//	int* ptr = mergeArr(arr1, arr2, len);
//	for (int i = 0; i < len; i++)
//	{
//		std::cout << *(ptr + i) << " ";
//	}
//		
//	delete[] ptr;
//
//	return 0;
//}
//
//int* mergeArr(int* arr1, int* arr2, int len)
//{
//	int* mergedArrays = new int[len];
//	for (int i = 0; i < len; i++)
//	{
//		bool isGreaterFound = false;
//		for (int j = 0; j < len; j++)
//		{
//			if (arr1[i] < arr2[j])
//			{
//				mergedArrays[i] = j;
//				std::cout << mergedArrays[i] << std::endl;
//
//				isGreaterFound = true;
//				break;
//			}
//		
//		}
//
//		if (!isGreaterFound)
//		{
//			mergedArrays[i] = -1;
//		}
//	}
//
//	return mergedArrays;
//}