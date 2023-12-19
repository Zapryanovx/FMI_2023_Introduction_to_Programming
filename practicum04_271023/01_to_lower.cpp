#include <iostream>

char toLower(char ch);
char toUpper(char ch);

int main() {

	char ch = ' ';
	std::cin >> ch;

	if (ch >= 'a' && ch <= 'z') {
		std::cout << toUpper(ch) << std::endl;
	}
	if (ch >= 'A' && ch <= 'Z') {
		std::cout << toLower(ch) << std::endl;;
	}
	
	return 0;
}

char toLower(char ch) {
	return ch + ('a' - 'A');
}

char toUpper(char ch) {
	return ch - ('a' - 'A');
}