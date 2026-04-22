//Fig. 6.15: fig06_15.c
// Sorting an array's values into ascending order.
#include <stdio.h>
#define SIZE 20

// function main begins program execution
int main(void)
{
	// initialize a
	int a[SIZE] = {0, 123, 333, 321, 2, 12,1,2,34,45,431,887,990,99,62,9,8,8,8,11};

	puts("Data items in original order");

	// output original array
	for (size_t i = 0; i < SIZE; ++i) {
		printf("%4d", a[i]);
}

	// bubble sort
	// loop to control number of passes
	for (unsigned int pass = 1; pass < SIZE; ++pass) {

		// loop to control number of comparisons per pass
		for (size_t i = 0; i < SIZE - 1; ++i) {

			// compare adjacent elements and swap them if first
			// element is greater than second element
			if (a[i] > a[i + 1]) {
				int hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}
		}
	}

	puts("\nData items in ascending order");

	// output sorted array
	for (size_t i = 0; i < SIZE; ++i) {
		printf("%4d", a[i]);
	}

	puts("");
}
