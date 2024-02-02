//#include <iostream>
//
//void ConvertArr(long arr[], long S, long E);
//
//int main()
//{
//	
//	long arr[5] = {1, 2, 3, 4, 5};
//
//	ConvertArr(arr, 2, 4);
//
//	for (int i = 0; i < 5; i++)
//	{
//		std::cout << arr[i] << " ";
//	}
//	std::cout << std::endl;
//
//	return 0;
//}
//
//void ConvertArr(long arr[], long S, long E)
//{
//	if (S < 0)
//	{
//		return;
//	}
//
//	for (int i = S; i <= S + (E - S) / 2; i++)
//	{
//		long temp = arr[i];
//		arr[i] = arr[S + E - i];
//		arr[S + E - i] = temp;
//
//	}
//}