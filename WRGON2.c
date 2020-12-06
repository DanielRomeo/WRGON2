#include <stdio.h>


void printArray(const int theArray[], int sizeOfArray){
	for (int i = 0; i < sizeOfArray; ++i)
	{	// try and catch incase the sizeOfArray is > than the theArrauy itself
		printf("%d\n", theArray[i]);
	}
}
