//#include <iostream>
//
//char* GetWord(char str[]);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	char str[MAX_SIZE] = "";
//	std::cin.getline(str, MAX_SIZE);
//
//	char* word = GetWord(str);
//	char* ptr = word; 
//	while (*ptr)
//	{
//		std::cout << *ptr;
//		ptr++;
//	}
//
//	delete[] word;
//}
//
//char* GetWord(char str[])
//{
//
//	int size = 0;
//	while (str[size])
//	{
//		size++;
//	}
//	std::cout << size << std::endl;
//
//	int maxLen = 0;
//	int maxLenStart = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		if (str[i] == ' ')
//		{
//			continue;
//		}
//
//		int currentLen = 0;
//		int currentIdx = i;
//		
//		while (str[currentIdx] != ' ' && str[currentIdx] != '\0')
//		{
//			currentLen++;
//			currentIdx++;
//			std::cout << currentLen << " "<< currentIdx<<" "<<str[currentIdx] << std::endl;
//		}
//
//		if (currentLen > maxLen)
//		{
//			maxLen = currentLen;
//			maxLenStart = i;
//		}
//
//	}
//	std::cout << maxLen << " " << maxLenStart << std::endl;
//
//	char *maxWord = new char[maxLen + 1];
//	int maxWordIdx = 0;
//	for (int i = maxLenStart; str[i] != ' '; i++)
//	{
//		maxWord[maxWordIdx] = str[i];
//		maxWordIdx++;
//	}
//
//	maxWord[maxWordIdx] = '\0';
//
//	return maxWord;
//}