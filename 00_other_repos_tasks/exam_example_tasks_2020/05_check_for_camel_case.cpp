//#include <iostream>
//
//bool checkstr(char* str);
//bool isUpper(char ch);
//bool isLower(char ch);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	char str[MAX_SIZE] = "";
//
//	std::cin.getline(str, MAX_SIZE);
//	std::cout << checkstr(str);
//
//	return 0;
//}
//
//bool checkstr(char* str)
//{
//	int size = 0;
//	while (str[size])
//	{
//		size++;
//	}
//
//	for (int i = 0; i < size - 1; i++)
//	{
//		if (isUpper(str[i]))
//		{
//			if (!isLower(str[i + 1]))
//			{
//				return 0;
//			}
//		}
//
//		if (isLower(str[i]))
//		{
//			if (!isUpper(str[i + 1]))
//			{
//				return 0;
//			}
//		}
//	}
//
//	return 1;
//}
//
//bool isUpper(char ch)
//{
//	return ch >= 'A' && ch <= 'Z';
//}
//
//bool isLower(char ch)
//{
//	return ch >= 'a' && ch <= 'z';
//}