//#include <iostream>
//
//int NumCalc(long num, int k, int l);
//
//int main()
//{
//	long num = 321421;
//	int k = 5, l = 2;
//
//	std::cout << NumCalc(num, k, l);
//
//	return 0;
//}
//
//int NumCalc(long num, int k, int l)
//{
//	int numCopy = num;
//	int digitCounter = 0;
//	while (numCopy)
//	{
//		numCopy /= 10;
//		digitCounter++;
//	}
//
//	if (k > digitCounter || k < 1 || l > digitCounter || l < 1)
//	{
//		return -1;
//	}
//
//	int sum = 0;
//	int digitPosFromBack = 0;
//	while (digitCounter != digitPosFromBack)
//	{
//		int digit = num % 10;
//		if (digitCounter - digitPosFromBack == k || digitCounter - digitPosFromBack == l)
//		{
//			sum += digit;
//		}
//		num /= 10;
//		digitPosFromBack++;
//	}
//
//	return sum;
//}