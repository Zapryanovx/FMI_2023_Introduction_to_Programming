//#include <iostream>
//
//int *mergeArrays(int arrNums[], int arrNumsTwo[], int arrNumsSize, int arrNumsTwoSize)
//{
//	
//	int arrMergeSize = arrNumsSize + arrNumsTwoSize;
//	int *arrMerge = new int[arrMergeSize];
//	
//	int idxOfArrMerge = 0;
//	for (int i = 0; i < arrNumsSize; i++)
//	{
//		arrMerge[idxOfArrMerge++] = arrNums[i];
//	}
//
//	for (int j = 0; j < arrNumsTwoSize; j++)
//	{
//		arrMerge[idxOfArrMerge++] = arrNumsTwo[j];
//	}
//
//	int min_idx = 0;
//	for (int i = 0; i < arrMergeSize - 1; i++)
//	{
//		min_idx = i;
//		for (int j = i + 1; j < arrMergeSize; j++)
//		{
//			if (arrMerge[j] < arrMerge[min_idx])
//			{
//				min_idx = j;
//			}
//		}
//
//		if (min_idx != i)
//		{
//			int temp = arrMerge[min_idx];
//			arrMerge[min_idx] = arrMerge[i];
//			arrMerge[i] = temp;
//		}
//	}
//
//	return arrMerge;
//}
//
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	int arrNums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int arrNumsTwo[5] = { 1, 2, 3, 4, 5 };
//
//	int* ptr = mergeArrays(arrNums, arrNumsTwo, 10, 5);
//	for (int i = 0; i < 15; i++)
//	{
//		std::cout << *(ptr + i) << " ";
//	}
//	std::cout << std::endl;
//
//	return 0;
//}