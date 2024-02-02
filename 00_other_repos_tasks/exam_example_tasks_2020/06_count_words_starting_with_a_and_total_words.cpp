//#include <iostream>
//
//int* GetWord(char str[]);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	char str[MAX_SIZE] = "";
//	std::cin.getline(str, MAX_SIZE);
//
//	int* ptr = GetWord(str);
//	std::cout << *(ptr) << " " << *(ptr + 1) << std::endl;
//	
//	return 0;
//}
//
//int* GetWord(char str[])
//{
//	int size = 0;
//	while (str[size])
//	{
//		size++;
//	}
//
//	int counterTotalWords = 0;
//	int counterWordsStartingWithA = 0;
//	for (int i = 0; i < size; i++)
//	{
//
//		if (str[i] == ' ')
//		{
//			continue;
//		}
//
//		if (str[i + 1] == ' ')
//		{
//			if (counterTotalWords == 0)
//			{
//				counterTotalWords++;
//			}
//			counterTotalWords++;
//		}
//
//		if ((str[i] == 'a' && i == 0) || (str[i - 1] == ' ' && str[i] == 'a'))
//		{
//			counterWordsStartingWithA++;
//		}
//
//	}
//
//	int *result = new int[2];
//	result[0] = counterWordsStartingWithA;
//	result[1] = counterTotalWords;
//	
//	return result;
//	
//}