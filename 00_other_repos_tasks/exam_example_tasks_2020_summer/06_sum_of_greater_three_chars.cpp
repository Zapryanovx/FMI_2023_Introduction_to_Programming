//#include <iostream>
//
//long convertNumber(char* num);
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	char num[MAX_SIZE] = "";
//	
//	std::cin.getline(num, MAX_SIZE);
//	
//	std::cout << convertNumber(num);
//
//	return 0;
//}
//
//long convertNumber(char* num)
//{
//	int size = 0;
//	while (num[size])
//	{
//		size++;
//	}
//
//	int sum = 0;
//	int maxEl = num[0];
//	int maxElIdx = 0;
//	int maxElCount = 0;
//
//	for(int i = 0; i < size; i++)
//	{
//		if (maxElCount == 3)
//		{
//			break;
//		}
//
//		if (maxEl < num[i])
//		{
//			maxEl = num[i];
//			maxElIdx = i;
//
//		}
//
//		if (i == size - 1)
//		{
//			sum += num[maxElIdx];
//			num[maxElIdx] = ' ';
//			maxElCount++;
//			
//			maxEl = num[0];
//			i = 0;
//		}
//
//	}
//
//	return sum;
//}
