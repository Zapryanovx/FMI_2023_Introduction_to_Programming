//#include <iostream>
//
//int analyzeArr(char* str);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	char str[MAX_SIZE] = "";
//	std::cin.getline(str, MAX_SIZE);
//
//	std::cout << analyzeArr(str);
//
//	return 0;
//}
//
//int analyzeArr(char* str)
//{
//	if (!str)
//	{
//		return -1;
//	}
//
//	int size = 0;
//	while (str[size])
//	{
//		size++;
//	}
//
//	char* uniqueEls = new char[size];
//	uniqueEls[0] = str[0];
//	int uniqueElsIdx = 1;
//	for (int i = 0; i < size; i++)
//	{
//		bool isAlreadyIn = false;
//		for (int j = 0; j < uniqueElsIdx; j++)
//		{
//			if (str[i] == uniqueEls[j])
//			{
//				isAlreadyIn = true;
//			}
//		}
//
//		if (!isAlreadyIn)
//		{
//			uniqueEls[uniqueElsIdx++] = str[i];
//		}
//	}
//
//	uniqueEls[uniqueElsIdx] = '\0';
//
//	return uniqueElsIdx;
//}
