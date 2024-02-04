//#include <iostream>
//
//void squareArr(int* nums, size_t len);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	int nums[MAX_SIZE] = {};
//	
//	int len = 0;
//	std::cin >> len;
//
//	for (int i = 0; i < len; i++)
//	{
//		std::cin >> nums[i];
//	}
//
//	squareArr(nums, len);
//
//	for (int i = 0; i < len; i++)
//	{
//		std::cout << nums[i] << " ";
//	}
//
//	return 0;
//}
//
//void squareArr(int* nums, size_t len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		nums[i] = nums[i] * nums[i];
//	}
//
//	int min_idx = 0;
//	for (int i = 0; i < len - 1; i++)
//	{
//		min_idx = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (nums[j] < nums[min_idx])
//			{
//				min_idx = j;
//			}
//		}
//
//		if (min_idx != i)
//		{
//			int temp = nums[min_idx];
//			nums[min_idx] = nums[i];
//			nums[i] = temp;
//		}
//	}
//
//}