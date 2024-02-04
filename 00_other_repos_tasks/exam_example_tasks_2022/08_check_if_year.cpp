//#include <iostream>
//
//const int MAX_SIZE = 100;
//
//int CheckDate(char* str);
//
//int main()
//{
//	char str[MAX_SIZE] = "";
//	std::cin.getline(str, MAX_SIZE);
//
//	std::cout << CheckDate(str);
//
//	return 0;
//}
//
//int CheckDate(char* str)
//{
//	int size = 0;
//	while (str[size])
//	{
//		size++;
//	}
//
//	if (size > 10)
//	{
//		return -1;
//	}
//
//	for(int i = 0; i < size; i++)
//	{
//		if (i != 2 && i != 5)
//		{
//			if (!(str[i] >= '0' && str[i] <= '9'))
//			{
//				return -1;
//			}
//		}
//
//		else
//		{
//			if (str[i] != '.')
//			{
//				return -1;
//			}
//		}
//	}
//
//	int day = ((str[0] - '0') * 10) + str[1] - '0';
//	int month = ((str[3] - '0') * 10) + str[4] - '0';
//	int year = (str[6] - '0') * 1000 + (str[7] - '0') * 100 + (str[8] - '0') * 10 + (str[9]);
//
//	if (month > 12 || month < 1 || day < 1 || year < 1)
//	{
//		return -1;
//	}
//
//	if (month == 2)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//
//			if (day > 29)
//			{
//				return 0;
//			}
//		}
//
//		else
//		{
//			if (day > 28)
//			{
//				return 0;
//			}
//		}
//	}
//
//	else if ((month % 2 != 0 && month <= 7) || (month % 2 == 0 && month > 7))
//	{
//		if (day > 31)
//		{
//			return 0;
//		}
//	}
//
//	else
//	{
//		if (day > 30)
//		{
//			return 0;
//		}
//	}
//
//
//	return 1;
//}