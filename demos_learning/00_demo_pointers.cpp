#include <iostream>

int main() {

	//RAM (memory) - array of bytes
	//each byte has an adress (Ex.: 0x000013A1)

	//Ex.: if we have an int (4 bytes) starting on 0x000013A1
	//that means our int occupies the addresses 0x000013A1, 0x000013A2, 0x000013A3, 0x000013A4
	
	int n = 624;
	std::cout << &n << std::endl; //outputs the address of n
	std::cout << std::endl;

	//(different than reference)
	//int &refN = n; -> reference
	//&n -> address
	
	//outputs 00000004F8F0FB64
	//so we can say that our most important bytes are 00000004F8F0FB64 and 00000004F8F0FB65
	//less important bytes are 00000004F8F0FB66 and 00000004F8F0FB67
	//because in the first two the degree of two is the biggest

	//POINTERS
	//holds the memory of another variable, null(0) if it doesn't hold any address
	//types: int, char, string etc.

	//pointers don't need to be initialized immediately like the references
	int a = 5;
	int* aPtr;
	aPtr = &a;
	std::cout << aPtr << std::endl;
	std::cout << std::endl;

	//
	//
	//
	//

	int b = 5;
	int* bPtr = &b; //referencing
	(*bPtr)++; //operation *bPtr on already existing pointer means deferencing (*bPtr means b so b has got up to 6)
	std::cout << *bPtr << std::endl; //deferencing 

	int bTest = *bPtr; //doesn't effect b or bPtr, we just initialize a new variable
	std::cout << *bPtr << " "; //deferencing 
	std::cout << bTest << std::endl;

	int bTestTwo = 1;
	bPtr = &bTestTwo; //we can set different addresses as value to the pointer
	(*bPtr)--;
	std::cout << bTestTwo << std::endl;

	bPtr = &b; //referencing
	std::cout << *bPtr << std::endl;
	std::cout << bTestTwo << std::endl;

	std::cout << std::endl;

	//
	//
	//
	//
	
	//pointer arithmetics
	//when we want to increment a pointer it depends on its type
	//incrementing by one means incrementing by one*sizeOf([type of pointer]) 
	char ch = 'a';
	short shortNum = 1;
	int intNum = 2500;

	char* charPtr = &ch;
	short* shortPtr = &shortNum;
	int* intPtr = &intNum;
	std::cout << "char: " << (void*) charPtr << " short: " << shortPtr << " int: " << intPtr << std::endl;

	charPtr++; //charPtr + 1*(sizeOf(char)) [+1]
	shortPtr++; //shortPtr + 1*(sizeOf(short)) [+2]
	intPtr++; //intPtr + 1*(sizeOf(int)) [+4]
	std::cout << "char: " << (void*) charPtr << " short: " << shortPtr << " int: " << intPtr << std::endl;

	charPtr += 10; //charPtr + 10*(sizeOf(char)) [+10]
	shortPtr += 10; //shortPtr + 10*(sizeOf(short)) [+20]
	intPtr += 10; ////shortPtr + 10*(sizeOf(short)) [+40]
	std::cout << "char: " << (void*) charPtr << " short: " << shortPtr << " int: " << intPtr << std::endl;
	std::cout << std::endl;
	//
	//
	//
	//
	
	int num = 421;
	const int* numPtr = &num;
	std::cout << numPtr << std::endl;
	numPtr++;
	//(*numPtr)++; the value is const so it can't be manipulated 
	std::cout << numPtr << std::endl;
	std::cout << *numPtr << std::endl; //the value staying on the new address
	
	std::cout << std::endl;
	
	int numTwo = 421;
	int* const numTwoPtr = &num;
	std::cout << numTwoPtr << std::endl;
	// numTwoPtr++; the address is const so it can't be manipulated 
	(*numTwoPtr)++; 
	std::cout << numTwoPtr << std::endl;
	std::cout << *numTwoPtr << std::endl; //the value of the new num

	std::cout << std::endl;

	//read-only[!]
	int numThree = 421;
	const int* const numThreePtr = &numThree;
	std::cout << numThreePtr << std::endl;
	// numThree++; the address is const so it can't be manipulated 
	// (*numThree)++; the value is const so it can't be manipulated 
	std::cout << numThreePtr << std::endl;
	std::cout << *numThreePtr << std::endl;
	std::cout << std::endl;
	//
	//
	//
	//

	int k = 31;
	int* kPtr = &k;
	int** kPtrPtr = &kPtr;

	//basically the value of the second pointer
	//is the address of the first pointer
	//if we have a third one, its' value will be the address of the second one and so on
	std::cout << "k: " << k << " kPtr: " << kPtr << " kPtrPtr: " << kPtrPtr << std::endl;
	std::cout << "k: " << k << " kPtr Value: " << *kPtr << " kPtrPtr Value: " << *kPtrPtr << std::endl; 
	std::cout << std::endl;
	
	//
	//
	//
	//

	int m = 210;
	char mCh = 'f';

	void* p = &m;
	void* q = &mCh;
	std::cout << *(int*)p << " " << p << std::endl;
	std::cout << *(char*)q << " " << q << std::endl;
	std::cout << std::endl;
	//
	//
	//
	//

	int arr[] = { 1, 2, 3, 4, 5 };
	std::cout << arr[3] << std::endl;
	std::cout << *(arr + 3) << std::endl;
	std::cout << std::endl;

	//
	//
	//
	//

	//[!]don't look below

	long long v = 105000;
	char* charPointer = (char*)(&v);

	std::cout << (long long)*charPointer << " " << (void*)charPointer << std::endl;
	*charPointer = 'h';
	*(charPointer + 1) = 'e';
	*(charPointer + 2) = 'l';
	*(charPointer + 3) = 'l';
	*(charPointer + 4) = 'o';
	*(charPointer + 5) = '\0';

	std::cout << charPointer<<" " << v << std::endl;
	

	return 0;
}

/*
0000004B099EF3F4

0000004B099EF414

6
6 6
0
6
0

char: 0000004B099EF4D4 short: 0000004B099EF4F4 int: 0000004B099EF514
char: 0000004B099EF4D5 short: 0000004B099EF4F6 int: 0000004B099EF518
char: 0000004B099EF4DF short: 0000004B099EF50A int: 0000004B099EF540

0000004B099EF594
0000004B099EF598
-858993460

0000004B099EF594
0000004B099EF594
422

0000004B099EF614
0000004B099EF614
421

k: 31 kPtr: 0000004B099EF654 kPtrPtr: 0000004B099EF678
k: 31 kPtr Value: 31 kPtrPtr Value: 0000004B099EF654

210 0000004B099EF6B4
f 0000004B099EF6D4
*/