//#include <iostream>
//
//bool doExist(char* symbols, char* word);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	char symbols[MAX_SIZE] = "";
//	char word[MAX_SIZE] = "";
//
//	std::cin.getline(symbols, MAX_SIZE);
//	std::cin.getline(word, MAX_SIZE);
//
//	std::cout << doExist(symbols, word);
//
//	return 0;
//}
//
//bool doExist(char* symbols, char* word)
//{
//	int sizeSymbols = 0;
//	while (symbols[sizeSymbols])
//	{
//		sizeSymbols++;
//	}
//	
//	int sizeWord = 0;
//	while (word[sizeWord])
//	{
//		sizeWord++;
//	}
//
//	for (int i = sizeSymbols - 1; i >= 0; i--)
//	{
//		if (symbols[i] == word[0])
//		{
//			int wordIdx = 0;
//			int symbolsIdx = i;
//			while (symbols[symbolsIdx] == word[wordIdx])
//			{
//				symbolsIdx--;
//				wordIdx++;
//
//				if (wordIdx == sizeWord)
//				{
//					return 1;
//				}
//			}
//		}
//	}
//
//	return 0;
//}