//#include <iostream>
//
//double getAverageOfDigits(int n);
//
//int main()
//{
//	int a = 9;
//	int b = 20;
//	int c = 4129;
//
//	std::cout << getAverageOfDigits(a) << " ";
//	std::cout << getAverageOfDigits(b) << " ";
//	std::cout << getAverageOfDigits(c) << " ";
//
//	return 0;
//}
//
//double getAverageOfDigits(int n)
//{
//	int digitsSum = 0;
//	int digitsCount = 0;
//	while (n)
//	{
//		digitsSum += n % 10;
//		digitsCount++;
//		n = n / 10;
//	}
//
//	double digitsAverage = digitsSum / digitsCount;
//	return digitsAverage;
//}