//#include <iostream>
//
//double getSumOfOddIndexes(double arr[], int size);
//
//int main()
//{
//	double arrOne[1] = { 3.24 };
//	double arrTwo[3] = { 3.24, 3.24, 3.00 };
//	double arrThree[5] = { 1.20, 1.20, 1.20, 1.47, 1.50 };
//
//	std::cout<< getSumOfOddIndexes(arrOne, 1) << " ";
//	std::cout << getSumOfOddIndexes(arrTwo, 3) << " ";
//	std::cout << getSumOfOddIndexes(arrThree, 5);
//
//	return 0;
//}
//
//double getSumOfOddIndexes(double arr[], int size)
//{
//	double sum = 0;
//
//	for (int i = 1; i < size; i += 2)
//	{
//		sum += arr[i];
//	}
//
//	return sum;
//}