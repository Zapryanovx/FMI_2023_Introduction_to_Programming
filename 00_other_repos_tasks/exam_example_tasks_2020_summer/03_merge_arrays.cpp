//#include <iostream>
//
//int* mergeArrays(int numsOne[], int numsTwo[], int m);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	int numsOne[MAX_SIZE] = {};
//	int numsTwo[MAX_SIZE] = {};
//
//	int m = 0;
//	std::cin >> m;
//
//	for (int i = 0; i < m; i++)
//	{
//		std::cin >> numsOne[i];
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		std::cin >> numsTwo[i];
//	}
//
//	int* ptr = mergeArrays(numsOne, numsTwo, m);
//	for (int i = 0; i < m; i++)
//	{
//		std::cout << *(ptr + i)<<" ";
//	}
//
//	delete[] ptr;
//
//	return 0;
//}
//
//int* mergeArrays(int numsOne[], int numsTwo[], int m)
//{
//	int *mergedArrays = new int[m];
//	for (int i = 0; i < m; i++)
//	{
//		mergedArrays[i] = numsOne[i] + numsTwo[m - i - 1];
//	}
//
//	return mergedArrays;
//}