/*#include <iostream>

void funcRef(int numA, int& numB);

int main() 
{
	//REFERENCES

	//reference should be initialized and declared immediately 
	//that means we initialize and declare refA on the same line of our logic
	//
	// 
	//Ex.:
	//int a = 0;
	//int refA = a;
	// 
	//[!] Note: the code above is not a reference (new memory is used for refA)
	//[!] Note: if we manipulate refA, a won't be manipulated
	
	int a = 5;
	int refA = a;

	refA += 1204;
	std::cout << "a: " << a << " refA: " << refA << std::endl;
	std::cout << std::endl;

	//when reference same memory is used for refB
	//so we can basically say {refB} and {b} are the same thing
	//
	//if we manipulate refB, we manipulate b too
	//if we manipulate b, we manipulate refB too
	// 
	//[!] Note: not a useful tool if you don't use methods (functions) 
	//[!] Note: we can have multiple references to the same variable
	
	int b = 5;
	int& refB = b;

	std::cout << "b: " << b << " refB: " << refB << std::endl;
	
	refB++;
	std::cout << "b: " << b << " refB: " << refB << std::endl;
	
	b = 231;
	std::cout << "b: " << b << " refB: " << refB << std::endl;
	std::cout << std::endl;
	
	//[!] Note: you can have reference to everyhing but reference. Why?
	int c = 5;
	int& refC = c;
	int& refTwoC = refC;

	refTwoC++;
	std::cout << "c: " << c << " refC: " << refC << " refTwoC: " << refTwoC << std::endl;
	std::cout << std::endl;
	//refC doesn't have it's own memory (it has the memory of c) so refTwoC will automatically be given the memory of c too
	//in other words refTwoC will become another reference to c
	//in that case [refTwoC = refC] is equal to [refTwoC = c]
	
	//Conclusion: 
	// 1) reference is ALWAYS to a variable (the reference is actually the same variable but with another name)
	// 2) int &&refA = a; -> is not valid
	// 3) int &refA;      -> is not valid
	// 4) manipulating [a] or [refA] will manipulate the other one 


	// WHAT REFERENCES ARE USEFUL FOR?
	// methods(functions)

	int numA = 5;
	int numB = 5;
	funcRef(numA, numB);
	std::cout << "numA: " << numA << " numB: " << numB << std::endl;
	//by using reference numB in our global scope is manipulated too
	//by NOT using reference numA in our main scope is NOT manipulated like the copy of a in the func


	//
	//
	//
	//


	return 0;
}

void funcRef(int numANotRef, int& numBRef) {
	
	numANotRef++;
	numBRef++;
	std::cout << "numANotRef: " << numANotRef << " numBRef: " << numBRef << std::endl;
}
*/