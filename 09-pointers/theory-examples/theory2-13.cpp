// fig07_09.c
// Attempting to modify a constant pointer to non-constant data.
#include <stdio.h>

int main(void) {
int x = 0; // define x
int y = 0; // define y

// ptr is a constant pointer to an integer that can be modified
// through ptr, but ptr always points to the same memory location
int *ptr = &x;

*ptr = 7; // allowed: *ptr is not const
ptr = &y; // error: ptr is const; cannot assign new address
 }
