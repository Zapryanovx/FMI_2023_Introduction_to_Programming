#include <iostream>

void findSubsets(int* arr, int n);
void outputSubset(int* arr, int n, int j);

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

	findSubsets(arr, n);

	return 0;
}

void findSubsets(int* arr, int n)
{
	int subsetsAll = 1 << n; //subsets = 2^n
	for (int i = 0; i < subsetsAll; i++)
	{
		outputSubset(arr, n, i);
	}
}

void outputSubset(int* arr, int n, int j)
{
	std::cout << "{ ";
	for (int i = n - 1; i >= 0; i--)
	{
		if (j % 2 != 0)
		{
			std::cout << arr[i] << " ";
		}
		j /= 2;
	}
	std::cout << "} ";
}