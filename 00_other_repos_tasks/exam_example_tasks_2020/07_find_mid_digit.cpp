//#include <iostream>
//
//int AnalyzeNum(long N);
//
//int main()
//{
//	long N = 0;
//	std::cin >> N;
//
//	std::cout << AnalyzeNum(N);
//
//	return 0;
//}
//
//int AnalyzeNum(long N)
//{
//	int nCopy = N;
//	int digitCounter = 0;
//	while (nCopy)
//	{
//		nCopy /= 10;
//		digitCounter++;
//	}
//
//	int *uniqueDigits = new int[digitCounter];
//	
//	uniqueDigits[0] = N % 10;
//	int uniqueDigitsSize = 1;
//	
//	while (N)
//	{
//		int digit = N % 10;
//		N /= 10;
//
//		bool isAlreadyIn = false;
//		for (int i = 0; i < uniqueDigitsSize; i++)
//		{
//			if (uniqueDigits[i] == digit)
//			{
//				isAlreadyIn = true;
//			}
//		}
//
//		if (!isAlreadyIn)
//		{
//			uniqueDigits[uniqueDigitsSize++] = digit;
//		}
//	}
//
//	for (int i = 0; i < uniqueDigitsSize; i++)
//	{
//		int counterLeft = 0;
//		int counterRight = 0;
//
//		for (int l = 0; l < i; l++)
//		{
//			if (uniqueDigits[l] < uniqueDigits[i])
//			{
//				counterLeft++;
//			}
//
//			if (uniqueDigits[l] > uniqueDigits[i])
//			{
//				counterRight++;
//			}
//		}
//
//		for (int r = i + 1; r < uniqueDigitsSize; r++)
//		{
//			if (uniqueDigits[r] < uniqueDigits[i])
//			{
//				counterLeft++;
//			}
//
//			if (uniqueDigits[r] > uniqueDigits[i])
//			{
//				counterRight++;
//			}
//		}
//
//		if (counterLeft == counterRight && counterLeft > 0)
//		{
//			return uniqueDigits[i];
//		}
//	}
//
//	return -1;
//}