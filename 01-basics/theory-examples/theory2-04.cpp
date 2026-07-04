// Fig. 9.2: fig09_02.c
// Using the integer conversion specifiers
#include <stdio.h>

int main(void)
{
	printf("%d\n", 455);
	printf("%i\n", 455); // i same as d in printf
	printf("%d\n", +455); // plus sign does not print + 
	printf("%d\n", -455); // minus sign prints
	printf("%llu\n", 123123456789);
	printf("%ld\n", 2000000000L); // L suffix makes literal a long int
	printf("%o\n", 455); // octal deðeri
	printf("%u\n", 455);
	printf("%u\n", -455);
	printf("%x\n", 255); // hexadecimal with lowercase letters
	printf("%X\n", 1023); // hexadecimal with uppercase letters
}
