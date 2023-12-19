/*#include <iostream>

const int MAX_SIZE = 100;

void printStr(char str[], int size, int lastIntervalIdx)
{
	for (int i = lastIntervalIdx + 1; i < size; i++)
	{
		std::cout << str[i];
	}
}

bool checkIfInterval(char str[], int i)
{
	if (str[i] == ' ')
	{
		return true;
	}

	return false;
}

char* findLastWord(char str[], int& size, int &lastIntervalIdx)
{

	while (str[size])
	{
		size++;

		if (checkIfInterval(str, size))
		{
			lastIntervalIdx = size;
		}
	}
	str[size] = '\0';

	return str;
}

int main()
{
	char str[MAX_SIZE] = "";
	std::cin.getline(str, MAX_SIZE);

	int size = 0;
	int lastIntervalIdx = 0;
	

	findLastWord(str, size, lastIntervalIdx);
	printStr(str, size, lastIntervalIdx);

	return 0;
}*/