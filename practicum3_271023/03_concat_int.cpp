/*#include <iostream>

int concatInt(int n, int m);

int main() {

	int n = 0, m = 0;
	std::cin >> n >> m;
	std::cout << concatInt(n, m) << std::endl;

	return 0;
}

int concatInt(int n, int m) {
	
	int count = 0;
	int nCopy = n;
	while (nCopy != 0) {
		nCopy /= 10;
		count++;
	}

	for (int i = 0; i < count; i++) {
		n *= 10;
	}

	return n + m;

}*/