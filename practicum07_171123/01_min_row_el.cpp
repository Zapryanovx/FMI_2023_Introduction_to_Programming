//#include <iostream>
//
//const int MAX_SIZE = 10;
//
//int findMinOfRow(int matrix[], int rows, int cols);
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
//		std::cout<<findMinOfRow(matrix[i], rows, cols) << " ";
//	}
//	 
//	return 0;
//}
//
//int findMinOfRow(int matrix[], int rows, int cols) {
//
//	int minEl = matrix[0];
//	for (int i = 0; i < cols; i++) {
//		if (matrix[i] < minEl) {
//			minEl = matrix[i];
//		}
//	}
//
//	return minEl;
//}