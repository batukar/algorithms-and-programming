// Fig. 10.9: fig10_09.c
// Using the bitwise AND, bitwise inclusive OR, bitwise
// exclusive OR and bitwise complement operators
#include <stdio.h>

void displayBits(unsigned int value); // prototype

int main(void)
{
	// demonstrate bitwise exclusive OR (^)
	unsigned int number1;
	unsigned int number2;
	printf("%s", "1.nci Pozitif tam sayiyi giriniz: ");
	scanf("%u", &number1);

	printf("%s", "2.nci Pozitif tam sayiyi giriniz: ");
	scanf("%u", &number2);
	
	puts("\nThe result of combining the following");
	displayBits(number1);
	displayBits(number2);
	puts("using the bitwise exclusive OR operator ^ is");
	displayBits(number1 ^ number2);


}

// display bits of an unsigned int value
void displayBits(unsigned int value)
{
	// declare displayMask and left shift 31 bits
	unsigned int displayMask = 1 << 31;

	printf("%10u = ", value);

	// loop through bits
	for (unsigned int c = 1; c <= 32; ++c) {
		putchar(value & displayMask ? '1' : '0');
		value <<= 1; // shift value left by 1

		if (c % 8 == 0) { // output a space after 8 bits
			putchar(' ');
		}
	}

	putchar('\n');
}
