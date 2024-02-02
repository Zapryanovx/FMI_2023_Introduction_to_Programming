//#include <iostream>
//
//const int MAX_SIZE = 100;
//
//char* CheckStr(char str[]);
//
//int main()
//{
//	char str[MAX_SIZE] = "";
//	std::cin.getline(str, MAX_SIZE);
//
//	char* ptr = CheckStr(str);
//	while (*(ptr))
//	{
//		std::cout << *(ptr);
//		ptr++;
//	}
//
//	return 0;
//}
//
//char* CheckStr(char str[])
//{
//	char uniqueEls[MAX_SIZE] = "";
//	int uniqueElsSize = 0;
//
//	int size = 0;
//	while (str[size])
//	{
//		size++;
//	}
//
//	for (int i = 0; i < size; i++)
//	{
//
//		bool isAlreadyIn = false;
//		for (int j = 0; j < uniqueElsSize; j++)
//		{
//			if(str[i] == uniqueEls[j])
//			{	
//				isAlreadyIn = true;
//			}
//		}
//
//		if (!isAlreadyIn)
//		{
//			uniqueEls[uniqueElsSize] = str[i];
//			uniqueElsSize++;
//		}
//		
//	}
//
//	uniqueEls[uniqueElsSize] = '\0';
//
//	return uniqueEls;
//}