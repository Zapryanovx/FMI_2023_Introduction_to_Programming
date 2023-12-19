/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2023/2024
*
* @author Ilian Zapryanov
* @idnumber 8MI0600405
* @task 3
*
*/

/*#include <iostream>

bool isInputValid(int &n, char arr[], int &s);
bool isShotValid(char ball);
void outputArray(int n, char arr[]);
void checkSequence(char arr[], int indexOfBall, int &n);
void removeSequence(char arr[], int indexOfBall, int &n, int counterLeft, int counterRight);

int main() 
{

	const int MAX_SIZE = 256;
	char arr[MAX_SIZE] = {};
	int n = 0;
	int s = 0;

	if (isInputValid(n, arr, s)) 
	{
		
		char ball = 'a';
		int indexOfBall = 0;
		bool isValid = true;

		while (s-- != 0) 
		{

			std::cin >> indexOfBall >> ball;

			isValid = isShotValid(ball);
			if (!isValid)
			{

				break;
			}
			else if (indexOfBall > n || indexOfBall < 0) 
			{

				continue;
			}

			for (int i = n - 1; i > indexOfBall; i--) 
			{

				arr[i + 1] = arr[i];
			}
	
			if (indexOfBall - n < 1) 
			{

				n++;
			}
			
			arr[indexOfBall + 1] = ball;
			checkSequence(arr, indexOfBall, n);
		}

		if (isValid) 
		{

			if (n != 0) 
			{

				outputArray(n, arr);
			}
			else
			{

				std::cout << -1 << std::endl;
			}
		}
	}
	
	return 0;
}

bool isInputValid(int &n, char arr[], int &s) 
{

	std::cin >> n;
	if (!(n > 1 && n < 255)) 
	{

		std::cout << "Incorrect input" << std::endl;
		return false;
	}

	for (int i = 0; i < n; i++)
	{

		std::cin >> arr[i];
		if(!(arr[i] >= 'a' && arr[i] <= 'z'))
		{

			std::cout << "Incorrect input" << std::endl;
			return false;
		}

	}

	std::cin >> s;
	if (!(s >= 1 && s <= 127))
	{

		std::cout << "Incorrect input" << std::endl;
		return false;
	}

	return true;
}

bool isShotValid(char ball) 
{

	if (!(ball >= 'a' && ball <= 'z')) 
	{

		std::cout << "Incorrect input" << std::endl;
		return false;
	}

	return true;
}

void outputArray(int n, char arr[]) 
{

	for (int i = 0; i < n; i++)
	{

		std::cout << arr[i]<<" ";
	}
	std::cout << std::endl;
}

void checkSequence(char arr[], int indexOfBall, int &n) 
{
	
	int counterLeft = 0;
	int counterRight = 0;

	for (int i = indexOfBall; i >= 0; i--)
	{
		
		if (arr[i] != arr[indexOfBall + 1]) 
		{
			break;
		}
		counterLeft++;
	}
	
	for (int j = indexOfBall + 2; j < n; j++)
	{
		
		if (arr[j] != arr[indexOfBall + 1])
		{
			break;
		}
		counterRight++;
	}

	if (counterLeft + counterRight + 1 >= 3) 
	{
		removeSequence(arr, indexOfBall, n, counterLeft, counterRight);
	} 
}

void removeSequence(char arr[], int indexOfBall, int &n, int counterLeft, int counterRight) 
{
	
	int oldLength = n;
	n -= counterLeft + counterRight + 1;

	if (n > 0)
	{

		for (int i = indexOfBall - counterLeft + 1, j = indexOfBall + counterRight + 2; i < n, j < oldLength; i++, j++)
		{
			arr[i] = arr[j];
		}

		if (arr[indexOfBall - counterLeft] == arr[indexOfBall - counterLeft + 1])
		{
			checkSequence(arr, indexOfBall - counterLeft, n);
		}
	}
}*/