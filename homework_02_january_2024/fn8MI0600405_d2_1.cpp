///**
//*
//* Solution to homework assignment 2
//* Introduction to programming course
//* Faculty of Mathematics and Informatics of Sofia University
//* Winter semester 2023/2024
//*
//* @author Ilian Zapryanov
//* @idnumber 8MI0600405
//* @task 1
//*
//*/
//
//#include <iostream>
//
//const int MAX_SIZE = 65;
//
//
//char getEncodedVersionOfEl(char* str, char originalEl);
//void addEncodedElsToNewStr(char* str, char firstEl, char secondEl,  char* strEncoded, int i);
//char* getEncodedVersionOfStr(char* str, int size,  char* strEncoded);
//bool inputStr(char* str);
//int  getSizeOfStr(char* str);
//void clearMemory(char* strEncoded);
//
//int main()
//{
//
//	char str[MAX_SIZE] = "";
//	char* strEncoded = new char[MAX_SIZE * 2 - 1];
//
//	//if input is successful
//	if (inputStr(str))
//	{
//		int size = getSizeOfStr(str);
//		std::cout << getEncodedVersionOfStr(str, size, strEncoded) << std::endl;
//	}
//
//	else
//	{
//		std::cout << "Incorrect input" << std::endl;
//	}
//
//    clearMemory(strEncoded);
//
//	return 0;
//}
//
//
//char* getEncodedVersionOfStr(char* str, int size, char* strEncoded)
//{
//
//	for (int i = 0; i < size; i++)
//	{
//		//divide one char into two parts (first 4 bits and last 4 bits)
//		char firstEl = str[i] >> 4;
//		char secondEl = str[i] & 0x0F;
//
//		addEncodedElsToNewStr(str, firstEl, secondEl, strEncoded, i);
//	}
//	strEncoded[2 * size] = '\0';
//
//	return strEncoded;
//}
//
//
//void addEncodedElsToNewStr(char* str, char firstEl, char secondEl, char* strEncoded, int i)
//{
//	//add the two new chars to our encoded str 
//	strEncoded[2 * i] = getEncodedVersionOfEl(str, firstEl);
//	strEncoded[2 * i + 1] = getEncodedVersionOfEl(str, secondEl);
//
//}
//
//
//char getEncodedVersionOfEl(char* str, char originalEl)
//{
//
//	char encodedEl = 0;
//
//	//add zeroes between every two bits
//	for (int i = 0; i < 4; i++)
//	{
//		char bit = (originalEl >> i) & 1;
//		encodedEl |= (bit << (2 * i + 1));
//	}
//
//	//add ones after original zeros
//	for (int i = 1; i <= sizeof(str[i]) * 8 - 1; i += 2)
//	{
//		if (((encodedEl >> i) & 1) == 0)
//		{
//			encodedEl |= 1 << (i - 1);
//		}
//	}
//
//	return encodedEl;
//}
//
////input str while checking if size is valid
//bool inputStr(char* str)
//{
//
//	std::cin.getline(str, MAX_SIZE);
//	int size = getSizeOfStr(str);
//
//	if (size >= MAX_SIZE)
//	{
//
//		char ch = ' ';
//		std::cin >> ch;
//		if (ch)
//		{
//			return false;
//		}
//
//		else
//		{
//			return true;
//		}
//	}
//
//	else
//	{
//		return true;
//	}
//
//}
//
////get size of str
//int getSizeOfStr(char* str)
//{
//
//	int size = 0;
//	while (*(str++))
//	{
//		size++;
//	}
//
//	return size;
//}
//
//
//void clearMemory(char* strEncoded)
//{
//	delete[] strEncoded;
//}