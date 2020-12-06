#include <stdio.h>
/*	Important to remmebr that C doesnt allow me to return an address of a local variable to the outside of a function..
	this is useful as ill see in the future...
	Since i need to retutn the address of the array-elements, I need to then declare the local variable as static before returning it 
*/

// function to print array of elemnts:
void printArray( int theArray[], int sizeOfArray){
	for (int i = 0; i < sizeOfArray; ++i)
	{	
		// try and catch incase the sizeOfArray is > than the theArrauy itself
		printf("%d\n", theArray[i]);
	}
}

// set all values in an array to a specified-number(else Zero)
// int * setToValue(const int theArray[], int value = 0){
// 	for (int i = 0; i < sizeOfArray; ++i)
// 	{	
// 			// i first need to write a function thats gonna get the size of the array 
// 	}
// }




// algorithm top get the size of an array
void sizeOfArray(int theArray[]){
	// printArray(theArray, 4);
	int value1 = sizeof *theArray;
	int value2 = sizeof *theArray ;
	// int size = sizeof theArray / sizeof theArray[0];
	int a = 1;
	printf("%d", value1/value2);	
}


int main(){

	int balance[3];
	int balance2[4] = {7, 8, 100, 13};

	// determine the size of array in BYTES:
	// int size = sizeof balance2 / sizeof balance2[0];
	// printf("%d", size);	
	sizeOfArray(balance2);

	// printArray(balance2, 4);
	return 0;
}