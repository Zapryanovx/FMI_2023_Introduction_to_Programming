//#include <iostream>
//
//const int MAX_SIZE = 10;
//
//int findNegativeNumsInRow(int matrix[], int rows, int cols);
//
//int main() {
//
//	int matrix[MAX_SIZE][MAX_SIZE] = {};
//	int rows = 0, cols = 0;
//	std::cin >> rows >> cols;
//
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			std::cin >> matrix[i][j];
//		}
//	}
//
//	for (int i = 0; i < rows; i++) {
//		std::cout << findNegativeNumsInRow(matrix[i], rows, cols) << " ";
//	}
//
//	return 0;
//}
//
//int findNegativeNumsInRow(int matrix[], int rows, int cols) {
//
//	int counter = 0;
//	for (int i = 0; i < cols; i++) {
//		if (matrix[i] < 0) {
//			counter++;
//		}
//	}
//
//	return counter;
//}