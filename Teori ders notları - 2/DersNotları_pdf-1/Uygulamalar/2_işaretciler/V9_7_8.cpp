// fig07_08.c
// Attempting to modify data through a
// non-constant pointer to constant data.
#include <stdio.h>
void f(int *xPtr); // prototype

int main(void) {
int y = 7; // define y

f(&y); // f attempts illegal modification
printf("%d\n", y);
 }

// xPtr cannot be used to modify the
// value of the variable to which it points
void f(int *xPtr) {
 *xPtr = 100; // error: cannot modify a const object
 }
