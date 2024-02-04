//#include <iostream>
//
//int checkNum(long N);
//
//int main()
//{
//	int N = 0;
//	std::cin >> N;
//
//	std::cout << checkNum(N);
//
//	return 0;
//}
//
//int checkNum(long N)
//{	
//	if (N < 10)
//	{
//		return -1;
//	}
//
//	int nCopy = N;
//	int digitCounter = 0;
//	int multiplier = 1;
//	
//	//count digits and set multiplier
//	while (nCopy > 9)
//	{
//		nCopy /= 10;
//		digitCounter++;
//		multiplier *= 10;
//	}
//	digitCounter++;
//
//	int* digits = new int[digitCounter];
//	int digitsIdx = 0;
//
//	//add digits to digits[], left -> right
//	while (N)
//	{
//		digits[digitsIdx++] = N / multiplier;
//		N = N - N / multiplier * multiplier;
//		multiplier /= 10;
//	}
//	
//	//remove digits and check res
//	for (int i = 0; i < digitCounter; i++)
//	{
//		int num = 0;
//		for (int j = digitCounter - 1; j >= 0; j--)
//		{
//			if (j == i)
//			{
//				continue;
//			}
//			
//			num += digits[j];
//		}
//
//		double res = num / 3.0;
//		if (num / 3 - res == 0)
//		{
//			return i + 1;
//		}
//	}
//
//	return -1;
//}