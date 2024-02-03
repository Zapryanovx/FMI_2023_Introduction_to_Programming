//#include <iostream>
//
//int maxWord(char* str);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	char str[MAX_SIZE] = {};
//	std::cin.getline(str, MAX_SIZE);
//
//	std::cout << maxWord(str);
//
//	return 0;
//}
//
//int maxWord(char* str)
//{
//	int size = 0;
//	while (str[size])
//	{
//		size++;
//	}
//
//	int maxLen = 0;
//	int maxLenIdx = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		if (str[i] == ' ')
//		{
//			continue;
//		}
//
//		int currentLen = 0;
//		while (str[i] != ' ' && str[i] != '\0')
//		{
//			currentLen++;
//			i++;
//		}
//
//		if (maxLen < currentLen)
//		{
//			maxLen = currentLen;
//			maxLenIdx = i - currentLen;
//		}
//
//	}
//
//	int counterLower = 0;
//	while (str[maxLenIdx] != ' ' && str[maxLenIdx] != '\0')
//	{
//		if (str[maxLenIdx] >= 'a' && str[maxLenIdx] <= 'z')
//		{
//			counterLower++;
//		}
//
//		maxLenIdx++;
//	}
//
//	return counterLower * maxLen;
//}