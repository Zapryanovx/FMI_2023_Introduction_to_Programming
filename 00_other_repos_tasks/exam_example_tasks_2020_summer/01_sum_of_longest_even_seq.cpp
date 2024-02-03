//#include <iostream>
//
//int largestSeq(int nums[], int N);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	int nums[MAX_SIZE] = {};
//
//	int N = 0;
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> nums[i];
//	}
//
//	std::cout << largestSeq(nums, N);
//
//	return 0;
//}
//
//int largestSeq(int nums[], int N)
//{
//	int maxSum = 0;
//	for (int i = 0; i < N; i++)
//	{
//		int sum = 0;
//		if (nums[i] % 2 == 0)
//		{
//			while (nums[i] % 2 == 0 && i < N)
//			{
//				sum += nums[i];
//				i++;
//			}
//
//			if (maxSum < sum)
//			{
//				maxSum = sum;
//			}
//		}
//	}
//
//	return maxSum;
//
//}