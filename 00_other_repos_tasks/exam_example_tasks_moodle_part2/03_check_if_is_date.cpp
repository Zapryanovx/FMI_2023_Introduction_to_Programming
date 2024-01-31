//#include <iostream>
//
//const int MAX_SIZE = 100;
//const int MAX_SIZE_DATE = 5;
//
//bool CheckDate(char str[]);
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
//bool CheckDate(char str[])
//{
//	int size = 0;
//	while (str[size])
//	{
//		size++;
//	}
//
//	if (size > MAX_SIZE_DATE)
//	{
//		return false;
//	}
//
//	for(int i = 0; i < size; i++)
//	{
//		if (i != 2)
//		{
//			if (!(str[i] >= '0' && str[i] <= '9'))
//			{
//				return false;
//			}
//		}
//
//		else
//		{
//			if (str[i] != '.')
//			{
//				return false;
//			}
//		}
//	}
//
//	int day = ((str[0] - '0') * 10) + str[1] - '0';
//	int month = ((str[3] - '0') * 10) + str[4] - '0';
//
//	if (month > 12 || month < 1 || day < 1)
//	{
//		return false;
//	}
//
//	if (month == 2)
//	{
//		if (day > 29)
//		{
//			return false;
//		}
//	}
//
//	else if ((month % 2 != 0 && month <= 7) || (month % 2 == 0 && month > 7))
//	{
//		if (day > 31)
//		{
//			return false;
//		}
//	}
//
//	else
//	{
//		if (day > 30)
//		{
//			return false;
//		}
//	}
//
//
//	return true;
//}