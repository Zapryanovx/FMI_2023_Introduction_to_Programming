//#include <iostream>
//
//long convertNumber(char* num);
//bool isDigit(char ch);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	char num[MAX_SIZE] = "";
//
//	std::cin.getline(num, MAX_SIZE);
//
//	std::cout << convertNumber(num);
//
// 	return 0;
//}
//
//long convertNumber(char* num)
//{
//	int size = 0;
//	while (num[size])
//	{
//		if (!isDigit(num[size]))
//		{
//			return -1;
//		}
//
//		size++;
//	}
//
//	int sum = 0;
//	for (int i = 0; i < size; i++)
//	{
//		sum += num[i];
//	}
//
//	return sum;
//}
//
//bool isDigit(char ch)
//{
//	return ch >= '0' && ch <= '9';
//}