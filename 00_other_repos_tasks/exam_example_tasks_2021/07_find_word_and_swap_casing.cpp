//#include <iostream>
//
//char* getWord(char* str, int k);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	char str[MAX_SIZE] = {};
//	std::cin.getline(str, MAX_SIZE);
//
//	int k = 0;
//	std::cin >> k;
//	
//	char* ptr = getWord(str, k);
//	std::cout << ptr;
//	delete[] ptr;
//
//	return 0;
//}
//
//char* getWord(char* str, int k)
//{
//	int size = 0;
//	while (str[size])
//	{
//		size++;
//	}
//
//	int wordCounter = 0;
//	char* wordFound = new char[size];
//	for (int i = 0; i < size; i++)
//	{
//		if (str[i] == ' ')
//		{
//			continue;
//		}
//
//		wordCounter++;
//		if (wordCounter == k)
//		{
//			int wordFoundIdx = 0;
//			while (str[i] != ' ' && str[i] != '\0')
//			{
//				if (str[i] >= 'A' && str[i] <= 'Z')
//				{
//					wordFound[wordFoundIdx] = str[i] + ('a' - 'A');
//				}
//
//				if (str[i] >= 'a' && str[i] <= 'z')
//				{
//					wordFound[wordFoundIdx] = str[i] - ('a' - 'A');
//				}
//
//				i++;
//				wordFoundIdx++;
//			}
//	
//			wordFound[wordFoundIdx] = '\0';
//			return wordFound;
//		}
//
//		else
//		{
//			while (str[i] != ' ')
//			{
//				i++;
//			}
//		}
//	}
//
//	char wrongNumber[] = "Wrong Number!";
//	char* wrongNumberReturn = new char[15];
//
//	for (int i = 0; i < 14; i++)
//	{
//		wrongNumberReturn[i] = wrongNumber[i];
//	}
//	
//	wrongNumberReturn[14] = '\0';
//	return wrongNumberReturn;
//}