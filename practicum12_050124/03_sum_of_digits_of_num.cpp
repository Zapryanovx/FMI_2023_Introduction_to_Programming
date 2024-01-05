//#include <iostream>
//
//int sumOfDigits(int n);
//
//int main()
//{
//
//	int n = 0;
//	std::cin >> n;
//	std::cout << sumOfDigits(n) << std::endl;
//
//	return 0;
//}
//
//int sumOfDigits(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//
//	int digit = n % 10;
//
//	return digit + sumOfDigits(n / 10);
//}