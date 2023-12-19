#include <iostream>


int sizeOfString(char str[])
{
	int size = 0;
	while (str[size])
	{
		size++;
	}

	return size;
}

void insertEl(char str[], int size, int idx, char el)
{
	size++;

	for (int i = size - 1; i >= idx; i--)
	{
		str[i] = str[i - 1];
	}

	str[idx] = el;
	str[size] = '\0';
}

int main()
{
	const int MAX_SIZE = 100;
	char str[MAX_SIZE] = "";
	std::cin.getline(str, MAX_SIZE);

	char el = ' ';
	std::cin >> el;

	int idx = 0;
	std::cin >> idx;

	int size = sizeOfString(str);
	insertEl(str, size, idx, el);

	std::cout << str << std::endl;

	return 0;
}
