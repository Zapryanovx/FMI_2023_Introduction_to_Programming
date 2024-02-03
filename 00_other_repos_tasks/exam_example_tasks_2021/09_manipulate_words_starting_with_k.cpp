#include <iostream>

char* changeWord(char* str, char k);

int main()
{
	const int MAX_SIZE = 100;
	char str[MAX_SIZE] = {};
	std::cin.getline(str, MAX_SIZE);

	char k = ' ';
	std::cin >> k;
	
	char* ptr = changeWord(str, k);
	std::cout << ptr;
	delete[] ptr;

	return 0;
}

char* changeWord(char* str, char k)
{
	int size = 0;
	while (str[size])
	{
		size++;
	}

	for (int i = 0; i < size; i++)
	{
		if (str[i] == ' ')
		{
			continue;
		}

		if (str[i] == k && str[i - 1] == ' ')
		{
			while (str[i] != ' ' && str[i] != '\0')
			{
				str[i] = '*';
				i++;
			}
		}
	}

	char* resultStr = new char[size + 1];

	for (int i = 0; i < size; i++)
	{
		resultStr[i] = str[i];
	}
	resultStr[size] = '\0';

	return resultStr;
}