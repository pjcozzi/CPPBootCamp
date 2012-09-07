#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int numbers[] = { 2, 4, 6, 8, 10 };

	// TODO 1:  Rewrite this loop with pointers instead of array indices
	for (int i = 0; i < 5; ++i)
	{
		std::cout << numbers[i] << ' ';
	}
	std::cout << std::endl;

	///////////////////////////////////////////////////////////////////////////

	int value = 5;
	int *pointerToValue = &value;

	std::cout << "value = " << value << std::endl;
	std::cout << "*pointerToValue = " << *pointerToValue << std::endl;

	*pointerToValue = 10;

	std::cout << "value = " << value << std::endl;
	std::cout << "*pointerToValue = " << *pointerToValue << std::endl;

	///////////////////////////////////////////////////////////////////////////

	int anotherValue = 15;
	int& referenceToAnotherValue = anotherValue;

	std::cout << "anotherValue = " << anotherValue << std::endl;
	std::cout << "referenceToAnotherValue = " << referenceToAnotherValue << std::endl;

	referenceToAnotherValue = 20;

	std::cout << "anotherValue = " << anotherValue << std::endl;
	std::cout << "referenceToAnotherValue = " << referenceToAnotherValue << std::endl;

	///////////////////////////////////////////////////////////////////////////

	int *dynamicallyAllocatedValue = new int;

	*dynamicallyAllocatedValue = 25;

	std::cout << "*dynamicallyAllocatedValue = " << *dynamicallyAllocatedValue << std::endl;

	delete dynamicallyAllocatedValue;

	///////////////////////////////////////////////////////////////////////////

	int *dynamicallyAllocatedValues = new int[2];

	// TODO 2:  Use array notation instead of pointers in the following two lines
	*(dynamicallyAllocatedValues + 0) = 30;
	*(dynamicallyAllocatedValues + 1) = 35;

	std::cout << "dynamicallyAllocatedValues[] = " 
		      << *(dynamicallyAllocatedValues + 0)
			  << ' '
	          << *(dynamicallyAllocatedValues + 1)		
			  << std::endl;

	delete [] dynamicallyAllocatedValues;

	return 0;
}
