//#include <iostream>
//
//int* countletters(int numsOne[], int numsTwo[], int N);
//bool isUpper(char ch);
//bool isLower(char ch);
//
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	int numsOne[MAX_SIZE] = {};
//	int numsTwo[MAX_SIZE] = {};
//
//	int N = 0;
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> numsOne[i];
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> numsTwo[i];
//	}
//
//	int* ptr = countletters(numsOne, numsTwo, N);
//	std::cout << *(ptr) << " " << *(ptr + 1) << std::endl;
//
//	delete[] ptr;
//
//	return 0;
//}
//
//int* countletters(int numsOne[], int numsTwo[], int N)
//{
//	int counterUpper = 0;
//	int counterLower = 0;
//
//	for (int i = 0; i < N; i++)
//	{
//		char symbol = numsOne[i] + numsTwo[i];
//
//		if (isUpper(symbol))
//		{
//			counterUpper++;
//		}
//
//		if (isLower(symbol))
//		{
//			counterLower++;
//		}
//	}
//
//	int* result = new int[2];
//	result[0] = counterUpper;
//	result[1] = counterLower;
//	//int result[2] = { counterUpper, counterLower };
//	
//	return result;
//}
//
//bool isUpper(char ch)
//{
//	return ch >= 'A' && ch <= 'Z';
//}
//
//bool isLower(char ch)
//{
//	return ch >= 'a' && ch <= 'z';
//}