//#include <iostream>
//
//char* revandreplace(char* str);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	char str[MAX_SIZE] = "";
//
//	std::cin.getline(str, MAX_SIZE);
//
//	char* ptr = revandreplace(str);
//	while (*(ptr))
//	{
//		std::cout << *(ptr);
//		ptr++;
//	}
//
//	return 0;
//}
//
//char* revandreplace(char* str)
//{
//	int size = 0;
//	while (str[size])
//	{
//		size++;
//	}
//
//	for (int i = 0; i < size / 2; i++)
//	{
//		char temp = str[i];
//		str[i] = str[size - i - 1];
//		str[size - i - 1] = temp;
//	}
//
//	for (int i = 0; i < size; i++)
//	{
//		if (str[i] == 'e')
//		{
//			str[i] = '!';
//		}
//
//		else if (str[i] == 'y')
//		{
//			str[i] = '*';
//		}
//	}
//
//	return str;
//}