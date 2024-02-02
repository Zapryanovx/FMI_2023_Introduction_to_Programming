//#include <iostream>
//
//int findElement(long arr[], int l);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	long arr[MAX_SIZE] = {};
//
//	int l = 0;
//	std::cin >> l;
//	for (int i = 0; i < l; i++)
//	{
//		std::cin >> arr[i];
//	}
//
//	std::cout << findElement(arr, l);
//
//	return 0;
//}
//
//int findElement(long arr[], int l)
//{
//	
//	for (int i = l - 2; i >= 1; i--)
//	{
//		if (arr[i] > (arr[i-1] + arr[i+1]) / 2)
//		{
//			return i;
//		}
//	}
//
//	return -1;
//}
