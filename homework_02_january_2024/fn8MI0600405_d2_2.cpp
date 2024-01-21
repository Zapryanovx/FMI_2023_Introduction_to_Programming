///**
//*
//* Solution to homework assignment 2
//* Introduction to programming course
//* Faculty of Mathematics and Informatics of Sofia University
//* Winter semester 2023/2024
//*
//* @author Ilian Zapryanov
//* @idnumber 8MI0600405
//* @task 2
//*
//*/
//
//#include <iostream>
//
//void findMatches(char str[], char strTemplate[], int currentIndexString, int currentIndexTemplate, char** uniqueMatches, int& counterUniqueMatchesIndex);
//bool isUnique(char** uniqueMatches, int counterUniqueMatchesIndex, char str[], int currentIndexString);
//
//char* inputArray();
//bool isStrValid(char str[]);
//bool IsTemplateValid(char strTemplate[]);
//int  getSizeOfStr(char str[]);
//bool isAlpha(char ch);
//bool isDigit(char ch);
//
//void emptyUniqueMatches(char** uniqueMatches, int& counterUniqueMatchesIndex, int size);
//void clearMemory(char** uniqueMatches, char str[], char strTemplate[], int size);
//
//int main()
//{
//    char* str = inputArray();
//    char* strTemplate = inputArray();
//
//    if (isStrValid(str) && IsTemplateValid(strTemplate))
//    {
//        int size = getSizeOfStr(str);
//        char** uniqueMatches = new char* [size];
//        for (int i = 0; i < size; i++) 
//        {
//            uniqueMatches[i] = nullptr;  
//        }
//
//        int counterUniqueMatchesTotal = 0;
//        int counterUniqueMatchesIndex = 0;
//        for (int start = 0; start < size; start++)
//        {
//            findMatches(str, strTemplate, start, 0, uniqueMatches, counterUniqueMatchesIndex);
//            counterUniqueMatchesTotal += counterUniqueMatchesIndex;
//
//            emptyUniqueMatches(uniqueMatches, counterUniqueMatchesIndex, size); // empty uniqueMatches for next iteration
//        }
//
//        clearMemory(uniqueMatches, str, strTemplate, size); 
//
//        std::cout << counterUniqueMatchesTotal << std::endl;
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
//void findMatches(char str[], char strTemplate[], int currentIndexString, int currentIndexTemplate, char** uniqueMatches, int& counterUniqueMatchesIndex)
//{
//    int sizeOfStr = getSizeOfStr(str);
//    int sizeOfStrTemp = getSizeOfStr(strTemplate);
//
//    //when to stop
//    if (strTemplate[currentIndexTemplate] == '\0')
//    {
//        if (isUnique(uniqueMatches, counterUniqueMatchesIndex, str, currentIndexString)) // check if match is unique
//        {
//            uniqueMatches[counterUniqueMatchesIndex] = new char[currentIndexString + 1]; // make place for match
//            for (int i = 0; i < currentIndexString; i++)
//            {
//                uniqueMatches[counterUniqueMatchesIndex][i] = str[i];
//            }
//
//            uniqueMatches[counterUniqueMatchesIndex][currentIndexString] = '\0'; 
//            counterUniqueMatchesIndex++;
//        }
//
//        return;
//    }
//
//    if (str[currentIndexString] == '\0')
//    {
//        return;
//    }
//
//
//    //[first] case
//    //if we have the same els or we are on the special symbol *
//    //incrementing both indexes is enough
//    if (strTemplate[currentIndexTemplate] == '*' || str[currentIndexString] == strTemplate[currentIndexTemplate])
//    {
//        findMatches(str, strTemplate, currentIndexString + 1, currentIndexTemplate + 1, uniqueMatches, counterUniqueMatchesIndex);
//    }
//
//
//    //[second] case
//    //if we are on an alpha and on the special symbol @
//    //incrementing both indexes is enough
//    else if (strTemplate[currentIndexTemplate] == '@' && isAlpha(str[currentIndexString]))
//    {
//        findMatches(str, strTemplate, currentIndexString + 1, currentIndexTemplate + 1, uniqueMatches, counterUniqueMatchesIndex);
//    }
//
//
//    //[third] case
//    //if we are on a number and on the special symbol %
//    //we should check if there is a match 
//    // 1) if % takes one digit 
//    // 2) if % takes two digits
//    else if (strTemplate[currentIndexTemplate] == '%' && isDigit(str[currentIndexString]))
//    {
//
//        //get all possible variatons of templates and check them all
//
//        //1 digit
//        findMatches(str, strTemplate, currentIndexString + 1, currentIndexTemplate + 1, uniqueMatches, counterUniqueMatchesIndex);
//
//        //2 digits if possible
//        if (isDigit(str[currentIndexString + 1]))
//        {
//            findMatches(str, strTemplate, currentIndexString + 2, currentIndexTemplate + 1, uniqueMatches, counterUniqueMatchesIndex);
//        }
//
//    }
//
//
//}
//
//
//bool isUnique(char** uniqueMatches, int counterUniqueMatchesIndex, char str[], int currentIndexString)
//{
//    for (int i = 0; i < counterUniqueMatchesIndex; i++)
//    {
//        bool isMatch = true;
//        for (int j = 0; j < currentIndexString; j++)
//        {
//
//            // if difference is found, there is no need to check further
//            // uniqueMatches[i] is not the same as str
//            if (uniqueMatches[i][j] != str[j])
//            {
//                isMatch = false;
//                break;
//            }
//        }
//
//        //if isMatch is still true
//        //uniqueMatches[i] is the same as str, so str is not unique
//        if (isMatch)
//        {
//            return false;
//        }
//    }
//
//    //if isMatch has been set to false every iteration, str is unique
//    return true;
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
//    while (std::cin.get(inputEl))
//    {
//        //end of input line
//        if (inputEl == '\n' || inputEl == '\0')
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
//            for (int i = 0; i < counter; i++)
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
//bool isStrValid(char str[])
//{
//    int size = getSizeOfStr(str);
//
//    for (int i = 0; i < size; i++)
//    {
//        //if not allowed
//        if (!(isAlpha(str[i]) || isDigit(str[i]) || str[i] == ' '))
//        {
//            return false;
//        }
//    }
//
//    return true;
//}
//
//bool IsTemplateValid(char strTemplate[])
//{
//    int size = getSizeOfStr(strTemplate);
//
//    for (int i = 0; i < size; i++)
//    {
//        //if not allowed
//        if (!(isAlpha(strTemplate[i]) || isDigit(strTemplate[i]) || strTemplate[i] == ' ' ||
//            strTemplate[i] == '*' || strTemplate[i] == '@' || strTemplate[i] == '%'))
//        {
//            return false;
//        }
//    }
//
//    return true;
//}
//
//
//int getSizeOfStr(char str[])
//{
//
//    int size = 0;
//    while (*(str++))
//    {
//        size++;
//    }
//
//    return size;
//}
//
//
//bool isAlpha(char ch)
//{
//    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
//}
//
//bool isDigit(char ch)
//{
//    return ch >= '0' && ch <= '9';
//}
//
//
//void emptyUniqueMatches(char** uniqueMatches, int& counterUniqueMatchesIndex, int size)
//{
//    for (int i = 0; i < counterUniqueMatchesIndex; i++) 
//    {
//        delete[] uniqueMatches[i]; 
//        uniqueMatches[i] = nullptr; 
//    }
//
//    counterUniqueMatchesIndex = 0; // reset the count for the next iteration
//}
//
//void clearMemory(char** uniqueMatches, char str[], char strTemplate[], int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        delete[] uniqueMatches[i];
//    }
//
//    delete[] uniqueMatches;
//    delete[] str;
//    delete[] strTemplate;
//}
