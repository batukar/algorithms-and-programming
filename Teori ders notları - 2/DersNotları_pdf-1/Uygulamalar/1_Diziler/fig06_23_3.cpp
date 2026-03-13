// fig06_18.c
// Using variable-length arrays in C99
#include <stdio.h>
#define size

// function prototypes
void print1DArray(size_t size, int array[size]);
int row=0;
int col=0;
void print2DArray(int arrayy);

int main(void) {
	printf("%s", "Enter size of a one-dimensional array: ");
	int arraySize = 0; // size of 1-D array
	scanf("%d", &arraySize);

	int array[arraySize]; // declare 1-D variable-length array

	printf("%s", "Enter number of rows and columns in a 2-D array: ");
	int row1 = 0; // number of rows in a 2-D array
	int col1 = 0; // number of columns in a 2-D array
	scanf("%d %d", &row1, &col1);

	int array2D1[row1][col1]; // declare 2-D variable-length array

	printf("%s",
		"Enter number of rows and columns in another 2-D array: ");
	int row2 = 0; // number of rows in a 2-D array
	int col2 = 0; // number of columns in a 2-D array
	scanf("%d %d", &row2, &col2);

	int array2D2[row2][col2]; // declare 2-D variable-length array

	// test sizeof operator on VLA
	printf("\nsizeof(array) yields array size of %zu bytes\n",
	sizeof(array));

	// assign elements of 1-D VLA
	for (size_t i = 0; i < arraySize; ++i) {
		array[i] = i * i;
	}

	// assign elements of first 2-D VLA
	for (size_t i = 0; i < row1; ++i) {
		for (size_t j = 0; j < col1; ++j) {
			array2D1[i][j] = i + j;
		}
	}

	// assign elements of second 2-D VLA
	for (size_t i = 0; i < row2; ++i) {
		for (size_t j = 0; j < col2; ++j) {
			array2D2[i][j] = i + j;
		}
	}

	puts("\nOne-dimensional array:");
	print1DArray(arraySize, array); // pass 1-D VLA to function

	puts("\nFirst two-dimensional array:");
//	print2DArray(row1, col1, array2D1); // pass 2-D VLA to function

	puts("\nSecond two-dimensional array:");
//	print2DArray(row2, col2, array2D2); // pass other 2-D VLA to function
}
return 0
/*void print1DArray(size_t size, int arrayy[size]) {
	// output contents of array
	for (size_t i = 0; i < size; i++) {
		printf("array[%zu] = %d\n", i, arrayy[i]);
	}
}

void print2DArray(size_t row, size_t col, int arrayy[row][col]) {
	// output contents of array
	for (size_t i = 0; i < row; ++i) {
		for (size_t j = 0; j < col; ++j) {
			printf("%5d", array[i][j]);
		}

		puts("");
	}
}*/
