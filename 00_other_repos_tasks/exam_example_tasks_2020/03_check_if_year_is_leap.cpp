//#include <iostream>
//
//bool CheckDate(char str[]);
//bool isDigit(char ch);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	char str[MAX_SIZE] = "";
//	std::cin.getline(str, MAX_SIZE);
//
//	std::cout << CheckDate(str);
//
//	return 0;
//}
//
//bool CheckDate(char str[])
//{
//	int size = 0;
//	while (str[size])
//	{
//		size++;
//	}
//
//	if (size > 7)
//	{
//		return 0;
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		if (!isDigit(str[i]))
//		{
//			return 0;
//		}
//	}
//
//	if (str[4] != ' ' && str[5] != 'g' && str[6] != '.')
//	{
//		return 0;
//	}
//
//	int year = 0;
//	int multiply = 1000;
//	for (int i = 0; i < 4; i++)
//	{
//		year += (str[i] - '0') * multiply;
//		multiply /= 10;
//	}
//
//	if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//
//bool isDigit(char ch)
//{
//	return ch >= '0' && ch <= '9';
//}