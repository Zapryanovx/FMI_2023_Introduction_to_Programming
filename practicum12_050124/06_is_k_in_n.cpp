//#include <iostream>
//
//bool isKInNum(int n, int k);
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	std::cin >> n >> k;
//
//	std::cout << isKInNum(n, k) << std::endl; // 1 if true, 0 if not
//
//	return 0;
//}
//
//bool isKInNum(int n, int k)
//{
//	int digit = n % 10;
//
//	if (digit == k)
//	{
//		return true;
//	}
//
//	if (n == 0)
//	{
//		return false;
//	}
//
//
//	isKInNum(n / 10, k);
//}