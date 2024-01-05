//#include <iostream>
//
//int countDigits(int n, int& counter);
//
//int main()
//{
//
//	int n = 0;
//	int counter = 0;
//	std::cin >> n;
//	std::cout << countDigits(n, counter) << std::endl;
//
//	return 0;
//}
//
//int countDigits(int n , int& counter)
//{
//	if (n < 10)
//	{
//		return counter + 1;
//	}
//
//	counter++;
//	countDigits(n / 10, counter);
//}