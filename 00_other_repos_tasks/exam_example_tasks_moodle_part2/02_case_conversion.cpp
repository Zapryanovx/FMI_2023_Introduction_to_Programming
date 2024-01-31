//#include <iostream>
//
//void Revert(char str[]);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	char str[MAX_SIZE] = "";
//
//	std::cin.getline(str, MAX_SIZE);
//	Revert(str);
//	
//	std::cout << str;
//	
//	return 0;
//}
//
//void Revert(char str[])
//{
//	int size = 0;
//	while (str[size])
//	{
//		size++;
//	}
//
//	for (int i = 0; i < size; i++)
//	{
//		if (str[i] >= 'A' && str[i] <= 'Z')
//		{
//			str[i] = str[i] + ('a' - 'A');
//		}
//
//		else if (str[i] >= 'a' && str[i] <= 'z')
//		{
//			str[i] = str[i] - ('a' - 'A');
//		}
//	}
//}