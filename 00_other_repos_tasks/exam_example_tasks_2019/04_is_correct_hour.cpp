//#include <iostream>
//
//int CheckTimeStr(char str[]);
//bool isDigit(char ch);
//bool isCorrectSymbol(char ch, char symbol);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	char str[MAX_SIZE] = "";
//	std::cin.getline(str, MAX_SIZE);
//
//	std::cout << CheckTimeStr(str);
//
//	return 0;
//}
//
//int CheckTimeStr(char str[])
//{
//	int size = 0;
//	while (str[size])
//	{
//		size++;
//	}
//
//	if (size > 8)
//	{
//		return -1;
//	}
//	std::cout << "as" << std::endl;
//
//	for (int i = 0; i < size; i++)
//	{
//
//		if (i != 2 && i != 5)
//		{
//			if (!isDigit(str[i]))
//			{
//				return -1;
//			}
//		}
//
//		else
//		{	
//			if (!isCorrectSymbol(str[i], ':'))
//			{
//				return -1;
//			}
//		}
//	}
//	int hours = (str[0] - '0') * 10 + (str[1] - '0');
//	int mins = (str[3] - '0') * 10 + (str[4] - '0');
//	int secs = (str[6] - '0') * 10 + (str[7] - '0');
//	
//	if (hours > 24 || mins > 59 || secs > 59)
//	{
//		return -1;
//	}
//	
//	return true;
//}
//
//bool isDigit(char ch)
//{
//	return ch >= '0' && ch <= '9';
//}
//
//bool isCorrectSymbol(char ch, char symbol)
//{
//	return ch == symbol;
//}