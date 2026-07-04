// Fig. 7.6: fig07_06.c
// Cube a variable using pass-by-value.
#include <stdio.h>

int cubeByValue(int n); // prototype
int main(void)
{
	int number = 5; // initialize number

	printf("number degiskeninin orjinal degeri= %d", number);

	// pass number by value to cubeByValue

	number = cubeByValue(number);

	printf("\nnumber segiskeninin yeni degeri yani kupu=  %d\n", number);
}

// calculate and return cube of integer argument
int cubeByValue(int n)
{
return n * n * n; // cube local variable n and return result
}
