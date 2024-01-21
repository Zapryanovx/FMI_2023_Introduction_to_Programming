///**
//*
//* Solution to homework assignment 2
//* Introduction to programming course
//* Faculty of Mathematics and Informatics of Sofia University
//* Winter semester 2023/2024
//*
//* @author Ilian Zapryanov
//* @idnumber 8MI0600405
//* @task 3
//*
//*/
//
//#include <iostream>
//
//char* inputArray();
//void findNFirstNLexicographicStrs(char* str, int leftIdx, int rightIdx, int &counterPerm, int n);
//
//bool isNValid(int n);
//void insertionSortStr(char* str, int leftIdx, int rightIdx);
//int getSizeOfStr(char* str);
//void swapEls(char& firstEl, char& secondEl);
//
//int main()
//{
//    
//    char* str = inputArray();
//    int n = 0;
//
//    std::cin >> n;
//
//    if (isNValid(n))
//    {
//        int sizeOfStr = getSizeOfStr(str);
//        int counterPerm = 0;
//
//        findNFirstNLexicographicStrs(str, 0, sizeOfStr - 1, counterPerm, n);
//    }
//
//    else
//    {
//        std::cout << "Incorrect input" << std::endl;
//    }
//
//    return 0;
//}
//
//
//char* inputArray()
//{
//    int sizeOfInput = 1; // '\0' minimum
//    char* inputLine = new char[sizeOfInput];
//
//    int counter = 0;
//    char inputEl = ' ';
//    while (true)
//    {
//        
//        //end of input line
//        std::cin.get(inputEl);
//        if (inputEl == ' ')
//        {
//            break;
//        }
//
//        //if size not enough, increase
//        if (counter == sizeOfInput - 1)
//        {
//            sizeOfInput+= 64;
//            char* newInputLine = new char[sizeOfInput];
//
//            //save the newest input line
//            for (int i = 0; i < counter; ++i)
//            {
//                newInputLine[i] = inputLine[i];
//            }
//
//            delete[] inputLine; //clear memory of old input line
//            inputLine = newInputLine; //set pointer to new input line
//        }
//
//        inputLine[counter] = inputEl;
//        counter++;
//    }
//
//    inputLine[counter] = '\0';
//    return inputLine;
//}
//
//
//void findNFirstNLexicographicStrs(char* str, int leftIdx, int rightIdx, int& counterPerm, int n)
//{
//    //if we reached N permutations, return
//    if (counterPerm >= n)
//    {
//        return;
//    }
//
//    //if we reached the end:
//    //1) print the permutations
//    //2) increment the counterUniqueMatchesIndex
//    if (leftIdx == rightIdx)
//    {
//        counterPerm++;
//        std::cout << str << std::endl;
//    }
//
//    else
//    {
//        for (int i = leftIdx; i <= rightIdx; i++)
//        {
//            bool isDuplicate = false;
//            //checking for duplicates els in current position
//            for (int j = leftIdx; j < i; j++)
//            {
//                if (str[j] == str[i])
//                {
//                    isDuplicate = true;
//                    break;
//                }
//            }
//
//            if (!isDuplicate)
//            {
//
//                //sort str after i els
//                insertionSortStr(str, i, rightIdx);
//
//                //place the next smallest ch at the start
//                swapEls(str[leftIdx], str[i]);
//
//                //recursion call (one to the left)
//                findNFirstNLexicographicStrs(str, leftIdx + 1, rightIdx, counterPerm, n);
//
//                //back to the last original str[]
//                swapEls(str[leftIdx], str[i]);
//            }
//        }
//    }
//
//}
//
//
//bool isNValid(int n)
//{
//    if (n < 0) 
//    {
//        return false;
//    }
//
//    return true;
//}
//
//void insertionSortStr(char* str, int start, int end)
//{
//    int minElIdx = 0;
//    for (int i = start; i < end; i++)
//    {
//        minElIdx = i;
//        for (int j = i + 1; j < end + 1; j++)
//        {
//            if (str[j] < str[minElIdx])
//            {
//                minElIdx = j;
//            }
//        }
//
//        swapEls(str[i], str[minElIdx]);
//    }
//}
//
////get size of str
//int getSizeOfStr(char* str)
//{
//    int size = 0;
//    while (*(str++))
//    {
//        size++;
//    }
//
//    return size;
//}
//
////swap
//void swapEls(char& firstEl, char& secondEl)
//{
//    int temp = firstEl;
//    firstEl = secondEl;
//    secondEl = temp;
//}
