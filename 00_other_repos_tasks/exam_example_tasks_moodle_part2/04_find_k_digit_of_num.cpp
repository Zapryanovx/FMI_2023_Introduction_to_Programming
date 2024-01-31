//#include <iostream>
//
//int DigitPos(long num, int k);
//
//int main()
//{
//	std::cout << DigitPos(1031, 3) << std::endl;
//	std::cout << DigitPos(1531, 5) << std::endl;
//
//	return 0;
//}
//
//int DigitPos(long num, int k)
//{
//	int digitsCounter = 0;
//	int numCopy = num;
//	while (numCopy)
//	{
//		digitsCounter++;
//		numCopy /= 10;
//	}
//	
//	if (k > digitsCounter)
//	{
//		return -1;
//	}
//
//	int digitPosFromBack = digitsCounter - k;
//	int digit = 0;
//
//	while (digitPosFromBack--)
//	{
//		num /= 10;
//	}
//
//	return num % 10;
//}
//
//
