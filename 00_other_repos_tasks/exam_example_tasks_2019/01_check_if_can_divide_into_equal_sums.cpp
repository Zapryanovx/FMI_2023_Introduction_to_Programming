//#include <iostream>
//
//int AnalyzeArray(int arr[], int l);
//
//int main()
//{
//	int arrNums[5] = { 1, 3, 0, 0, 4 };
//	int arrNumsTwo[6] = { 1, 6, 1, 0, 5, 199 };
//
//	std::cout << AnalyzeArray(arrNums, 5) << std::endl;
//	std::cout << AnalyzeArray(arrNumsTwo, 6) << std::endl;
//
//	return 0;
//}
//
//int AnalyzeArray(int arr[], int l)
//{
//	int sumLeft = 0;
//	int sumRight = 0;
//
//	for (int i = 0; i < l; i++)
//	{
//		sumLeft += arr[i];
//
//		for (int j = i + 1; j < l; j++)
//		{
//			sumRight += arr[j];
//
//		}
//
//		if (sumLeft == sumRight)
//		{
//			return 1;
//		}
//
//		else
//		{
//			sumRight = 0;
//		}
//	}
//
//	return 0;
//
//}
