/////**
////*
////* Solution to homework assignment 2
////* Introduction to programming course
////* Faculty of Mathematics and Informatics of Sofia University
////* Winter semester 2023/2024
////*
////* @author Ilian Zapryanov
////* @idnumber 8MI0600405
////* @task 4
////*
////*/
////
////#include <iostream>
////
////bool inputMatrix(int** matrix, int rows, int colsInfo[]);
////bool isRowsValid(int n);
////bool isColsValid(int n);
////
////int findLongestPathTotal(int** matrix, int rows, int colsInfo[]);
////int findLongestPathFromACell(int** matrix, int rows, int colsInfo[], int counterUniqueMatchesIndex, int row, int col);
////void swapIfMore(int temp, int& num);
////void clearMemory(int** matrix, int* colsInfo, int rows);
////
////int main()
////{
////
////	int rows = 0;
////	std::cin >> rows;
////
////	if (isRowsValid(rows))
////	{
////		int** matrix = new int* [rows];
////		int* colsInfo = new int[rows];
////
////
////		if (inputMatrix(matrix, rows, colsInfo))
////		{
////			int maxLength = findLongestPathTotal(matrix, rows, colsInfo);
////			std::cout << maxLength << std::endl;
////		}
////		else
////		{
////			std::cout << "Incorrect input" << std::endl;
////		}
////
////		clearMemory(matrix, colsInfo, rows);
////	}
////	
////	else
////	{
////		std::cout << "Incorrect input" << std::endl;
////	}
////
////
////	return 0;
////}
////
////
////bool inputMatrix(int** matrix, int rows, int colsInfo[])
////{
////	if (!isRowsValid(rows))
////	{
////		return false;
////	}
////
////	for (int i = 0; i < rows; i++)
////	{
////		std::cin >> colsInfo[i];
////
////	    if (!isColsValid(colsInfo[i]))
////		{
////			return false;
////		}
////		matrix[i] = new int[colsInfo[i]];
////	
////
////		for (int j = 0; j < colsInfo[i]; j++)
////		{
////			std::cin >> matrix[i][j];
////		}
////	}
////
////    return true;
////}
////
////
////bool isRowsValid(int n)
////{
////	if (n <= 0)
////	{
////		return false;
////	}
////	
////
////	return true;
////}
////
////
////bool isColsValid(int n)
////{
////	if (n < 0)
////	{
////		return false;
////	}
////
////
////	return true;
////}
////
////
////int findLongestPathTotal(int** matrix, int rows, int colsInfo[])
////{
////
////	int maxLength = 0;
////	for (int i = 0; i < rows; i++)
////	{
////		for (int j = 0; j < colsInfo[i]; j++)
////		{
////			//get the longest path starting from a [i][j] cell and compare it to the max till now
////			 //matrix[i][j] should be decreased by 1 on call, so we guarantee the minimum 1 of maxLengthOfCell
////			int cellMaxLength = findLongestPathFromACell(matrix, rows, colsInfo, i, j, matrix[i][j] - 1); 
////			swapIfMore(cellMaxLength, maxLength);
////		}
////	}
////
////	return maxLength;
////}
////
////
////int findLongestPathFromACell(int** matrix, int rows, int colsInfo[], int row, int col, int prevEl)
////{
////
////	//out of matrix or end of sequence
////	if (row < 0 || row >= rows || col < 0 || col >= colsInfo[row] || matrix[row][col] <= prevEl)
////	{
////		return 0; //end of sequence
////	}
////
////	int maxLengthCell = 0, temp = 0;
////
////	// check all directions
////	//[1] up
////	temp = findLongestPathFromACell(matrix, rows, colsInfo, row - 1, col, matrix[row][col]);
////	swapIfMore(temp, maxLengthCell);
////
////	//[2] down
////	temp = findLongestPathFromACell(matrix, rows, colsInfo, row + 1, col, matrix[row][col]);
////	swapIfMore(temp, maxLengthCell);
////
////	//[3] left
////	temp = findLongestPathFromACell(matrix, rows, colsInfo, row, col - 1, matrix[row][col]);
////	swapIfMore(temp, maxLengthCell);
////
////	//[4] right
////	temp = findLongestPathFromACell(matrix, rows, colsInfo, row, col + 1, matrix[row][col]);
////	swapIfMore(temp, maxLengthCell);
////
////	//[5] up left
////	temp = findLongestPathFromACell(matrix, rows, colsInfo, row - 1, col - 1, matrix[row][col]);
////	swapIfMore(temp, maxLengthCell);
////
////	//[6] up right
////	temp = findLongestPathFromACell(matrix, rows, colsInfo, row - 1, col + 1, matrix[row][col]);
////	swapIfMore(temp, maxLengthCell);
////
////	//[7] low left
////	temp = findLongestPathFromACell(matrix, rows, colsInfo, row + 1, col - 1, matrix[row][col]);
////	swapIfMore(temp, maxLengthCell);
////
////	//[8] low right
////	temp = findLongestPathFromACell(matrix, rows, colsInfo, row + 1, col + 1, matrix[row][col]);
////	swapIfMore(temp, maxLengthCell);
////
////
////	return maxLengthCell + 1;
////}
////
////
////void swapIfMore(int temp, int& num)
////{
////	if (temp > num)
////	{
////		num = temp;
////	}
////}
////
////
////void clearMemory(int** matrix, int* colsInfo, int rows)
////{
////
////	for (int i = 0; i < rows; i++)
////	{
////		delete[] matrix[i];
////	}
////	delete[] matrix;
////
////	delete[] colsInfo;
////}