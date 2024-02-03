//#include <iostream>
//
//long newNum(long num);
//
//int main()
//{
//	long a = 123456789;
//	long b = 5783932;
//
//	std::cout << newNum(a) << std::endl;
//	std::cout << newNum(b) << std::endl;
//
//	return 0;
//}
//
//long newNum(long num)
//{
//	int numCopy = num;
//	int digitCounter = 0;
//	while (numCopy)
//	{
//		numCopy /= 10;
//		digitCounter++;
//	}
//
//	int newNum = 0;
//	int digitPos = 0;
//	int digitMulty = 1;
//	while (num)
//	{
//		int digit = num % 10;
//		num /= 10;
//
//		if (digit % 2 == 0)
//		{
//			newNum += digit * digitMulty;
//			digitMulty *= 10;
//		}
//
//		digitPos++;
//	}
//
//	return newNum;
//}