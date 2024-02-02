//#include <iostream>
//
//int AnalyzeArray(int arr[], int l);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	int arr[MAX_SIZE] = {};
//	int l = 0;
//	std::cin >> l;
//
//	for (int i = 0; i < l; i++)
//	{
//		std::cin >> arr[i];
//	}
//
//	std::cout << AnalyzeArray(arr, l);
//
//	return 0;
//}
//
//int AnalyzeArray(int arr[], int l)
//{
//	if (!arr)
//	{
//		return -1;
//	}
//
//	int sumLeft = 0;
//	for (int i = 0; i < l - 1; i++)
//	{
//		sumLeft += arr[i]; 
//
//		int sumRight = 0;
//		for (int j = i + 1; j < l; j++)
//		{
//			sumRight += arr[j];
//		}
//
//		if(sumLeft == sumRight)
//		{
//			return 1;
//		}
//
//		if (sumLeft > sumRight)
//		{
//			return 0;
//		}
//	}
//}