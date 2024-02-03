//#include <iostream>
//
//int* cntWords(char str[]);
//bool isUpper(char ch);
//bool isLower(char ch);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	char str[MAX_SIZE] = "";
//
//	std::cin.getline(str, MAX_SIZE);
//
//	int* ptr = cntWords(str);
//	std::cout << *(ptr) << " " << *(ptr + 1) << std::endl;
//
//	return 0;
//}
//
//int* cntWords(char str[])
//{
//	int size = 0;
//	while (str[size])
//	{
//		size++;
//	}
//
//	int counterLower = 0;
//	int counterUpper = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		if (isUpper(str[i]))
//		{
//			while (isUpper(str[i]))
//			{
//				i++;
//			}
//
//			if (str[i] == ' ')
//			{
//				counterUpper++;
//			}
//
//			while (str[i] != ' ')
//			{
//				i++;
//			}
//
//			std::cout << std::endl;
//
//		}
//
//		if (isLower(str[i]))
//		{
//			while (isLower(str[i]))
//			{
//				i++;
//			}
//
//			if (str[i] == ' ')
//			{
//				counterLower++;
//			}
//
//			while (str[i] != ' ')
//			{
//				i++;
//			}
//
//		}
//	}
//
//	int *result = new int[2];
//	result[0] = counterLower;
//	result[1] = counterUpper;
//	
//	return result;
//}
//
//bool isUpper(char ch)
//{
//	return ch >= 'A' && ch <= 'Z';
//}
//
//
//bool isLower(char ch)
//{
//	return ch >= 'a' && ch <= 'z';
//}
