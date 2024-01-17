//#include <iostream>
//
//int getMaxNum(int nums[], int n);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	int* nums = new int[MAX_SIZE];
//
//	int n = 0;
//	std::cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		std::cin >> nums[i];
//	}
//
//	std::cout << getMaxNum(nums, n);
//
//	return 0;
//}
//
//int getMaxNum(int nums[], int n)
//{
//	int maxNum = nums[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (maxNum < nums[i])
//		{
//			maxNum = nums[i];
//		}
//	}
//
//	return maxNum;
//}