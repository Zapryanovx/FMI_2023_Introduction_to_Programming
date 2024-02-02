//#include <iostream>
//
//int CheckStr(char str[]);
//
//int main()
//{
//	char str[5] = "abab";
//	std::cout << CheckStr(str) << std::endl;
//
//	char strTwo[2] = "a";
//	std::cout << CheckStr(strTwo) << std::endl;
//
//	char strThree[3] = "ab";
//	std::cout << CheckStr(strThree) << std::endl;
//
//	return 0;
//}
//
//int CheckStr(char str[])
//{
//	int size = 0;
//	while (str[size])
//	{
//		size++;
//	}
//
//	if (size < 2)
//	{
//		return -1;
//	}
//
//	for (int i = 0; i < size / 2; i++)
//	{
//		for (int j = i + 1; j < size; j++)
//		{
//
//			if (str[i] == str[j])
//			{
//				char temp = str[j];
//				str[j] = str[size - i - 1];
//				str[size - i - 1] = temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < size / 2; i++)
//	{
//		if (str[i] != str[size - i - 1])
//		{
//			return 0;
//		}
//	}
//	return 1;
//
//}