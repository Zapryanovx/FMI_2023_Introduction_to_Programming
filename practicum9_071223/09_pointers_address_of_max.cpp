/*#include <iostream>

int* addressOfMaxNum(int* arr, int n);

int main()
{
	const int MAX_SIZE = 100;
	int arr[MAX_SIZE] = {};

	int n = 0;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> *(arr + i);
	}

	std::cout << addressOfMaxNum(arr, n);

	return 0;
}

int* addressOfMaxNum(int* arr, int n)
{
	int* max = arr;
	for (int i = 0; i < n; i++)
	{
		if (*max < *(arr + i))
		{
			max = arr + i;
		}
	}

	return max;
}

*/