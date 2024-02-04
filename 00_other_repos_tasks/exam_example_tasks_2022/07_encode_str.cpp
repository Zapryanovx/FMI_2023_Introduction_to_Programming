//#include <iostream>
//
//char* encodeWord(char* str, int N);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	char str[MAX_SIZE] = "";
//	std::cin.getline(str, MAX_SIZE);
//
//	int N = 0;
//	std::cin >> N;
//
//	char* ptr = encodeWord(str, N);
//	std::cout << ptr << std::endl;
//	
//	delete[] ptr;
//
//	return 0;
//}
//
//char* encodeWord(char* str, int N)
//{
//	int size = 0;
//	while (str[size])
//	{
//		if (str[size] < 32 || str[size] > 126)
//		{
//			char* errorFound = new char[3];
//			errorFound[0] = '-';
//			errorFound[1] = '1';
//			return errorFound;
//		}
//		
//		size++;
//	}
//
//	char* encodedStr = new char[size + 1];
//	for (int i = 0; i < size; i++)
//	{
//		std::cout << str[i] + N << std::endl;
//		if (str[i] + N > 126)
//		{
//			encodedStr[i] = str[i] + N - 94;
//			continue;
//		}
//		
//		encodedStr[i] = str[i] + N;
//	
//	}
//	encodedStr[size] = '\0';
//
//	return encodedStr;
//}