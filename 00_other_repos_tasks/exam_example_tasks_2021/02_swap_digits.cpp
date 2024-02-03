//#include <iostream>
//
//int* convertNum(long num, int k, int m);
//
//int main()
//{
//	int numOne = 123456789, k1 = 3, m1 = 5;
//	int numTwo = 437263, k2 = 4, m2 = 1;
//
//	int* ptr = convertNum(numOne, k1, m1);
//	for (int i = 0; i < 9; i++)
//	{
//		std::cout << *(ptr + i) << " ";
//	}
//	std::cout << std::endl;
//
//	int* ptrTwo = convertNum(numTwo, k2, m2);
//	for (int i = 0; i < 6; i++)
//	{
//		std::cout << *(ptrTwo + i) << " ";
//	}
//	std::cout << std::endl;
//  
//  delete[] ptr; 
//  delete[] ptrTwo;
// 
//	return 0;
//}
//
//int* convertNum(long num, int k, int m)
//{
//	int numCopy = num;
//	int digitCounter = 0;
//	while (numCopy)
//	{
//		numCopy /= 10;
//		digitCounter++;
//	}
//
//	int* newNum = new int[digitCounter];
//	for (int i = digitCounter - 1; i >= 0; i--)
//	{
//		newNum[i] = num % 10;
//		num /= 10;
//	}
//
//	int temp = newNum[k - 1];
//	newNum[k - 1] = newNum[m - 1];
//	newNum[m - 1] = temp;
//
//	return newNum;
//}