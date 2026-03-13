// Fig. 6.5: fig06_05.c
// Initializing the elements of array s to the even integers from 2 to 10.
#include <stdio.h>
#define SIZE 25  // maximum size of array

// function main begins program execution
int main(void)
{
// symbolic constant SIZE can be used to specify array size
	

	int s[SIZE]; // array s has SIZE elements

	for (size_t j = 0; j < SIZE; ++j) { // set the values
	s[j] = 2 + 20 * j;
	}

	printf("%s%13s\n", "Element", "Value");

// output contents of array s in tabular format
for (size_t j = 0; j < SIZE; ++j) {
printf("%7u%13d\n", j, s[j]);
	}
}
