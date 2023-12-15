/*#include <iostream>


//get size of str
int getSizeOfStr(char str[])
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	return i;
}

//to lower
void toLowerCase(char str[])
{
	int size = getSizeOfStr(str);
	for (int i = 0; i < size; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 'a' - 'A'; // 'a' - 'A' is the same as 'b' - 'B' etc. (formula)
		}
	}
}

void toUpperCase(char strTwo[])
{
	int size = getSizeOfStr(strTwo);
	for (int i = 0; i < size; i++)
	{
		if (strTwo[i] >= 'a' && strTwo[i] <= 'z')
		{
			strTwo[i] = strTwo[i] - 'a' + 'A';  // - 'a' + 'A' is the same as - 'b' + 'B' etc. (formula)
		}
	}
}

int main()
{
	const int MAX_SIZE = 100;
	char str[MAX_SIZE] = "";
	std::cin.getline(str, MAX_SIZE);

	char strTwo[MAX_SIZE] = "";
	std::cin.getline(strTwo, MAX_SIZE);

	toLowerCase(str);
	toUpperCase(strTwo);

	std::cout << str << std::endl;
	std::cout << strTwo << std::endl;

	return 0;
}*/