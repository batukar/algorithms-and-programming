// Fig. 7.7: fig07_07.c
// Cube a variable using pass-by-reference with a pointer argument.

#include <stdio.h>

void cubeByReference(int *nPtr); // function prototype

int main(void)
{
	int number = 5; // initialize number

	printf("number degiskeninin orjinal degeri= %d", number);

	// pass address of number to cubeByReference
	cubeByReference(&number);

	printf("\nnumber segiskeninin yeni degeri yani kupu= %d\n", number);
}

// calculate cube of *nPtr; actually modifies number in main
void cubeByReference(int *nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr
}
