// Fig. 9.4: fig09_04.c
// Using the floating-point conversion specifiers
#include <stdio.h>

int main(void)
{
	printf("%e\n", 1234567.89);
	printf("%e\n", +1234567.89); // plus does not print
	printf("%e\n", -1234567.89); // minus prints
	printf("%E\n", 1234567.89);
	printf("%f\n", 1234567.89); // six digits to right of decimal point
	printf("%g\n", 1234567.89); // prints with lowercase e
	printf("%G\n", 1234567.89); // prints with uppercase E
}
