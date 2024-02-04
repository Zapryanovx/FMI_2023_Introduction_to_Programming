//#include <iostream>
//
//unsigned int getGCD(const unsigned int* nums, size_t size);
//
//int main()
//{
//
//	const int MAX_SIZE = 100;
//	const unsigned int nums[6] = { 22, 31, 20, 12, 16, 18 };
//			
//	std::cout << getGCD(nums, 6);
//
//	return 0;
//}
//
//unsigned int getGCD(const unsigned int* nums, size_t size) 
//{
//
//	int gcdOfArr = 1;
//	int minEl = nums[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (nums[i] < minEl)
//		{
//			minEl = nums[i];
//		}
//	}
//
//	for (int i = minEl; i >= 1; i--)
//	{
//		bool isGCD = true;
//		for (int j = 0; j < size; j++)
//		{
//			if (nums[j] % i != 0)
//			{
//				isGCD = false;
//				break;
//			}
//		}
//
//		if (isGCD)
//		{
//			return i;
//		}
//	}
//
//}