/*#include <iostream>

const int MAX_SIZE = 100;

int sizeOfString(char str[])
{
	int size = 0;
	while (str[size])
	{
		size++;
	}

	return size;
}

char* removeElFromString(char str[], char el, int size)
{
	char multiplicatedStr[MAX_SIZE] = "";

	int idxOfMultiplicatedStr = 0;
	for (int i = 0; i < size; i++)
	{
		if (str[i] != el)
		{
			multiplicatedStr[idxOfMultiplicatedStr++] = str[i];
		}
	}
	multiplicatedStr[idxOfMultiplicatedStr] = '\0';

	return multiplicatedStr;
}
	
void printStr(char * ptrStr, int size)
{
	while (*ptrStr)
	{
		std::cout << *ptrStr;
		ptrStr++;
	}
	std::cout << std::endl;
}


int main()
{

	char str[MAX_SIZE] = "";
	std::cin.getline(str, MAX_SIZE);

	char el = ' ';
	std::cin >> el;

	int size = sizeOfString(str);
	char* ptrStr = removeElFromString(str, el, size);
	
	printStr(ptrStr, size);


	return 0;
}
*/