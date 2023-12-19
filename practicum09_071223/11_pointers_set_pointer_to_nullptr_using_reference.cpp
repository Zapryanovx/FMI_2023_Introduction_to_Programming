#include <iostream>

void setPtrToNull(int*& ptr);

int main()
{
	int n = 0;
	int* ptr = &n;
	
	setPtrToNull(ptr);

	std::cout << ptr << std::endl;

	return 0;
}

void setPtrToNull(int*& ptr)
{
	ptr = nullptr;
}