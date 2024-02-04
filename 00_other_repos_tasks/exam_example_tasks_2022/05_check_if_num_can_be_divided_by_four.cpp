//#include <iostream>
//
//int checkNum(long N, unsigned int m, unsigned int l);
//
//int main()
//{
//	int N = 0, m = 0, l = 0;
//	std::cin >> N >> m >> l;
//
//	std::cout << checkNum(N, m, l);
//
//	return 0;
//}
//
//int checkNum(long N, unsigned int m, unsigned int l)
//{
//	if (N < 10)
//	{
//		return -1;
//	}
//
//	int digitCounter = 0;
//	int nCopy = N;
//	int multiplier = 1;
//	while (nCopy > 9)
//	{
//		nCopy /= 10;
//		digitCounter++;
//		multiplier *= 10;
//	}
//	digitCounter++;
//
//	if (m < 1 || m > digitCounter || l < 1 || l > digitCounter)
//	{
//		return -1;
//	}
//
//	int* digits = new int[digitCounter];
//	int digitsIdx = 0;
//	while (N)
//	{
//		digits[digitsIdx++] = N / multiplier;
//		N = N - ((N / multiplier) * multiplier);
//		multiplier /= 10;
//	}
//
//	int temp = digits[l - 1];
//	digits[l - 1] = digits[m - 1];
//	digits[m - 1] = temp;
//
//	double res = (digits[digitCounter - 1] + digits[digitCounter - 2] * 10.0) / 4;
//	if ((digits[digitCounter - 1] + digits[digitCounter - 2] * 10) / 4- res == 0)
//	{
//		return 1;
//	}
//
//	return 0;
//}