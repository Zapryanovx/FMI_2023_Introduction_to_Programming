//#include <iostream>
//
//int reverseNum(int n);
//
//int main()
//{
//
//	int n = 0;
//	std::cin >> n;
//	std::cout << reverseNum(n) << std::endl;
//
//	return 0;
//}
//
//int reverseNum(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//
//	std::cout << (n % 10) << std::endl; //print last digit of num (123 to 3) -> (12 to 2) -> 1
//
//	return reverseNum(n / 10); //remove last digit of num (123 to 12) -> (12 to 1) 
//}