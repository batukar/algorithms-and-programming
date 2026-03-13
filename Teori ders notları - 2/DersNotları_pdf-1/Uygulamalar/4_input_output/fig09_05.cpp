// Fig. 9.5: fig09_05c
// Using the character and string conversion specifiers
#include <stdio.h>

int main(void)
{
	char character = 'A'; // initialize char
	printf("%c\n", character);

	printf("%s\n", "This is a string");

	char string[] = "Bu bir dizedir"; // initialize char array
	printf("%s\n", string);

	const char *stringPtr = "This is also a string"; // char pointer
	printf("%s\n", stringPtr);
	printf("%p\n", &stringPtr);
}
