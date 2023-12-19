/*#include <iostream>

int countAllSignsPointers(char str[]);
int countAllSignsIndex(char str[]);

int main()
{
	const int MAX_SIZE = 100;
	char str[100] = "";
	std::cin.getline(str, MAX_SIZE);

	std::cout << countAllSignsPointers(str) << std::endl;
	std::cout << countAllSignsIndex(str) << std::endl;

	return 0;
}

int countAllSignsPointers(char str[])
{
	int counter = 0;
	while (*(str++))
	{
		if (*str == ',' || *str == '.' || *str == ';' || *str == '!' || *str == '?' || *str == ':' || *str == '\'')  //you should escape [\] ' in order to take it as a symbol 
		{
			counter++;
		}
	}

	return counter;
}

int countAllSignsIndex(char str[])
{
	int idx = 0;
	int counter = 0;
	while (str[idx++])
	{
		if (str[idx] == ',' || str[idx] == '.' || str[idx] == ';' || str[idx] == '!' || str[idx] == '?' || str[idx] == ':' || str[idx] == '\'') //you should escape [\] ' in order to take it as a symbol 
		{
			counter++;
		}
	}

	return counter;
}
*/