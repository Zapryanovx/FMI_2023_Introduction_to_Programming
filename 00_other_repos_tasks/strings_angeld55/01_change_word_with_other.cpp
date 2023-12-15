/*#include <iostream>

int getSizeOfStr(char word[]);
void saveChanges(char str[], int idxOfWord, int copyOfIdx, char wordTwo[], int sizeOfWordTwo);

int main()
{
	const int MAX_SIZE = 100;
	char str[MAX_SIZE] = "";
	char wordOne[MAX_SIZE] = "";
	char wordTwo[MAX_SIZE] = "";

	std::cin.getline(str, MAX_SIZE);
	std::cin.getline(wordOne, MAX_SIZE);
	std::cin.getline(wordTwo, MAX_SIZE);

	//get sizes of str, where, what
	int sizeOfStr = getSizeOfStr(str);
	int sizeOfWordOne = getSizeOfStr(wordOne);
	int sizeOfWordTwo = getSizeOfStr(wordTwo);


	//3 cases:
	//1) if size of where < size of what
	//2) if size of where > size of what
	//3) if size of where and size of what are equal
	int i = 0;
	while(str[i] != '\0')
	{
	
		int idxOfWord = 0;
		int copyOfIdx = i;
		while (str[copyOfIdx] == wordOne[idxOfWord])
		{	
			
			if (idxOfWord == sizeOfWordOne - 1 && (str[copyOfIdx + 1] == ' ' || str[copyOfIdx + 1] == '\0'))
			{	
				copyOfIdx = i; //start point

				//first case
				if (sizeOfWordOne < sizeOfWordTwo)
				{	
					sizeOfStr += sizeOfWordTwo - sizeOfWordOne; //change size of str
					for (int j = sizeOfStr + 1; j > copyOfIdx + sizeOfWordTwo; j--)
					{
						str[j] = str[j - (sizeOfWordTwo - sizeOfWordOne)]; //shift everything right 
					
					}

					str[sizeOfWordTwo + copyOfIdx] = ' ';  // set space between new words
					str[sizeOfStr - sizeOfWordOne + sizeOfWordTwo] = '\0'; //adding the missing '\0'

					//save the changes
					saveChanges(str, idxOfWord, copyOfIdx, wordTwo, sizeOfWordTwo);
				}


				//second case
				else if (sizeOfWordOne > sizeOfWordTwo)
				{

					sizeOfStr += sizeOfWordOne - sizeOfWordTwo;  //change size of str
					for (int j = copyOfIdx + sizeOfWordTwo; j < sizeOfStr; j++)
					{
						str[j] = str[j + sizeOfWordOne - sizeOfWordTwo];  //shift everything left
					}

					str[sizeOfWordTwo + copyOfIdx] = ' '; // set space between new words
					str[sizeOfStr] = '\0'; //adding the missing '\0'

					//save the changes
					saveChanges(str, idxOfWord, copyOfIdx, wordTwo, sizeOfWordTwo);
				}

				//third case
				else
				{
					//save the changes
					saveChanges(str, idxOfWord, copyOfIdx, wordTwo, sizeOfWordTwo);
				}

				//set new start point
				i += sizeOfWordTwo - 1;
				
			}

			//increase needed indexes
			copyOfIdx++;
			idxOfWord++;
		}
	
		//increase i
		i++;
	}

	std::cout << str;

	return 0;
}

//get size of str
int getSizeOfStr(char word[])
{
	int i = 0;
	while (word[i] != '\0')
	{
		i++;
	}

	return i;
}

//save changes
void saveChanges(char str[], int idxOfWord, int copyOfIdx, char wordTwo[], int sizeOfWordTwo)
{
	for (idxOfWord = 0; idxOfWord < sizeOfWordTwo; idxOfWord++, copyOfIdx++)
	{
		str[copyOfIdx] = wordTwo[idxOfWord];
	}
}*/