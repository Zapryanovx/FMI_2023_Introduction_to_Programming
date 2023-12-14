/*#include <iostream>

void inputArray(int* arr, int n);
int findUniqueElement(int* arr, int n);

int main()
{
	const int MAX_SIZE = 100;
	int arr[MAX_SIZE] = {};

	int n = 0;
	std::cin >> n;
	
	inputArray(arr, n);
	std::cout << findUniqueElement(arr, n);

	return 0;
}

void inputArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cin >> *(arr + i);
	}
}

int findUniqueElement(int* arr, int n)
{
	int uniqueNum = 0;
	for (int i = 0; i < n; i++)
	{
		uniqueNum ^= *(arr + i);
	}

	return uniqueNum;
}
*/