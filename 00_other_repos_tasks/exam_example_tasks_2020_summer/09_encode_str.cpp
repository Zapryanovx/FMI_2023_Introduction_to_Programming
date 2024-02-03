#include <iostream>

char* Encode(char* str);

int main()
{
	char str[4] = "abc";

	char* ptr = Encode(str);

	while (*(ptr))
	{
		std::cout << *(ptr++);
	}

	return 0;
}

char* Encode(char* str)
{
	int size = 0;
	while (str[size])
	{
		size++;
	}

	char* encoded = new char[4 * size + 1];
	int encodedIdx = 0;
	for (int i = 0; i < size; i++)
	{
		int n = str[i];

		int digitCounter = 0;
		int nCopy = n;
		while (nCopy)
		{
			nCopy /= 10;
			digitCounter++;
		}

		int digitPos = 0;
		while (n)
		{
			int digit = n % 10;
			n /= 10;

			encoded[encodedIdx + (digitCounter - digitPos - 1)] = digit + '0';
			digitPos++;
		}

		encodedIdx += digitCounter;
		if (i < size - 1)
		{
			encoded[encodedIdx++] = '_';
		}
	}

	encoded[encodedIdx] = '\0';
	return encoded;
}