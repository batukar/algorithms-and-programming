// fig07_12.c
// Applying sizeof to an array name returns
// the number of bytes in the array.
#include <stdio.h>
#define SIZE 20

size_t getSize(const float *ptr); // prototype

int main(void){
float array[SIZE]; // create array

printf("Number of bytes in the array is %zu\n", sizeof(array));
printf("Number of bytes returned by getSize is %zu\n", getSize(array));
 }

// return size of ptr
size_t getSize(const float *ptr) {
return sizeof(ptr);
 }
