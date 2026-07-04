// Fig. 6.8: fig06_08.c
// Displaying a histogram.
#include <stdio.h>
#define SIZE 5

// function main begins program execution
int main(void)
{
// use initializer list to initialize array n
int n[SIZE] = {1, 2, 3, 4, 5};

printf("%s%13s%17s\n", "Element", "Value", "Histogram");

// for each element of array n, output a bar of the histogram
for (size_t i = 0; i < SIZE; ++i) {
	printf("%7u%13d          ", i, n[i]);

	for (int j = 1; j <= n[i]; ++j) { // print one bar
		printf("%c2", '**');
	}

	puts(""); // end a histogram bar with a newline

	}
}
