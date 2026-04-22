// Fig. 6.6: fig06_06.c
// Computing the sum of the elements of an array.
#include <stdio.h>
#define SIZE 12

// function main begins program execution
int main(void)
{
// use an initializer list to initialize the array
int a[SIZE] = {1, 2, 3, 1, 10, 1, 1, 11, 1, 1, 1, 111};
int total = 0; // sum of array

// sum contents of array a
for (size_t i = 0; i < SIZE; ++i) {
	total += a[i];
}

printf("Dizi elemanlarinin toplam degeri= %d\n", total);
}
