#include <iostream>

const int MAX_SIZE = 100;
const int MAX_SIZE_HISTOGRAM = 26;

void addToHistogram(char str[], int histogram[]);
bool isStrWithDiffLettersIndex(int histogram[]);

int main()
{

	char str[100] = "";
	std::cin.getline(str, MAX_SIZE);

	int histogram[MAX_SIZE_HISTOGRAM] = {};
	addToHistogram(str, histogram);

	std::cout << isStrWithDiffLettersIndex(histogram) << std::endl;

	return 0;
}

void addToHistogram(char str[], int histogram[])
{

	while (*str)
	{
		histogram[*(str)-'A']++;
		str++;
	}

	//for (int i = 0; i < MAX_SIZE_HISTOGRAM; i++)
	//{
	//	std::cout << histogram[i] << " ";
	//}
}

bool isStrWithDiffLettersIndex(int histogram[])
{
	for (int i = 0; i < MAX_SIZE_HISTOGRAM; i++)
	{
		if (histogram[i] > 1)
		{
			return false;
		}
	}

	return true;
} 

//SAZXCVBNMS
//1
