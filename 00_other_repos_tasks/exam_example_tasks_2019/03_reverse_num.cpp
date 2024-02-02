//#include <iostream>
//
//void ConvertNum(long &num);
//
//int main()
//{
//	long num = 521;
//	ConvertNum(num);
//	std::cout << num << std::endl;
//
//
//	return 0;
//}
//
//void ConvertNum(long &num)
//{
//
//	int digitCounter = 0;
//	int numCopy = num;
//	while (numCopy)
//	{
//		numCopy /= 10;
//		digitCounter++;
//	}
//
//	int reversedNum = 0;
//	int currentDigitPos = 0;
//	while (num)
//	{
//		int digit = num % 10;
//		num /= 10;
//
//		int digitPow = 1;
//		for (int i = 1; i < digitCounter - currentDigitPos; i++)
//		{
//			digitPow *= 10;
//		}
//
//		reversedNum += digit * digitPow;
//		currentDigitPos++;
//	}
//
//	num = reversedNum;
//}