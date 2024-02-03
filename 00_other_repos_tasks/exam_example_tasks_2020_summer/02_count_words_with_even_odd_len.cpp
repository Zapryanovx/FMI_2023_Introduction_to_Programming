//#include <iostream>
//
//int* numOfWords(char str[]);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	char str[MAX_SIZE] = "";
//
//	std::cin.getline(str, MAX_SIZE);
//
//	int* ptr = numOfWords(str);
//	std::cout << *(ptr) << " " << *(ptr + 1) << std::endl;
//
//	delete[] ptr;
//
//	return 0;
//}
//
//int* numOfWords(char str[])
//{
//	int size = 0;
//	while (str[size])
//	{
//		size++;
//	}
//
//	int counterEven = 0;
//	int counterOdd = 0;
//	for (int i = 0; i < size; i++)
//	{
//		int wordLen = 0;
//		if (str[i] == ' ')
//		{
//			continue;
//		}
//
//		while (str[i] != ' ')
//		{
//			wordLen++;
//			i++;
//		}
//
//		if (wordLen % 2 == 0)
//		{
//			counterEven++;
//		}
//
//		else
//		{
//			counterOdd++;
//		}
//	}
//
//	int* result = new int[2];
//	result[0] = counterEven;
//	result[1] = counterOdd;
//
//	return result;
//}