// fig07_06.c
// Converting a string to uppercase using a
// non-constant pointer to non-constant data.
#include <ctype.h>
#include <stdio.h>

void convertToUppercase(char *sPtr); // prototype

int main(void) {
char string[] = "MerHaBa and $32.98"; // initialize char array

printf("The string before conversion is: %s\n", string);
convertToUppercase(string);
printf("The string after conversion is: %s\n", string);
}

// convert string to uppercase letters
void convertToUppercase(char *sPtr) {
 while (*sPtr !=0) { // current character is not
*sPtr = toupper(*sPtr); // convert to uppercase
++sPtr; // make sPtr point to the next character
}
 }
