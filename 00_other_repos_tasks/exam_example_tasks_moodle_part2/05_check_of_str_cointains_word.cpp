//#include <iostream>
//
//bool doExist(char* symbols, char* word);
//
//int main()
//{
//	char symbols[9] = "testtest";
//	char word[5] = "test";
//	char wordTwo[4] = "abc";
//	std::cout << doExist(symbols, word)<<std::endl;
//	std::cout << doExist(symbols, wordTwo) << std::endl;
//
//
//	return 0;
//}
//
//bool doExist(char* symbols, char* word)
//{
//	int sizeOfSymbols = 0;
//	while (symbols[sizeOfSymbols])
//	{
//		sizeOfSymbols++;
//	}
//
//	int sizeOfWord = 0;
//	while (word[sizeOfWord])
//	{
//		sizeOfWord++;
//	}
//
//	for (int i = 0; i < sizeOfSymbols; i++)
//	{
//		if (symbols[i] == word[0])
//		{
//			int copyOfIdxSymbols = i;
//			int idxWord = 0;
//			while (word[idxWord])
//			{
//				if (word[idxWord] != symbols[copyOfIdxSymbols])
//				{
//					break;
//				}
//
//				idxWord++;
//				copyOfIdxSymbols++;
//			}
//
//			if (idxWord == sizeOfWord)
//			{
//				return true;
//			}
//		}
//	}
//
//	return false;
//}