#include <iostream>

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


int main()
{
	const int MAX_SIZE = 100;
	char str[MAX_SIZE] = "";
	std::cin.getline(str, MAX_SIZE);

	//validation
	int size = getSizeOfStr(str);
	if (size == 0)
	{
		return -1;
	}
	//else (if valid)
	else 
	{	
		//validation if not words in str (only signs)
		bool isChIn = false;
		for (int i = 0; i < size; i++)
		{
			if (str[i] != ' ' && str[i] != '!' && str[i] != '?' && str[i] != '.')
			{
				isChIn = true;
			}
		}

		if (isChIn)
		{
			int counter = 1;
			for (int i = 0; i < size; i++)
			{
				if (str[i] == ' ' || str[i] == '!' || str[i] == '?' || str[i] == '.') //if sign is found
				{
					while (str[i] == ' ' || str[i] == '!' || str[i] == '?' || str[i] == '.') //skip all of them
					{
						i++;
					}

					if (str[i] != '\0') //if not end
					{
						counter++; //we've found new a word
					}
				}
			}

			std::cout << counter << std::endl;
		}
		else
		{
			return -1;
		}
		
	}
	


	return 0;
}