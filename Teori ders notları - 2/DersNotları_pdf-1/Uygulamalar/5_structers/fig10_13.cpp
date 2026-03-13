// Fig. 10.13: fig10_13.c
// Using the bitwise shift operators
#include <stdio.h>

void displayBits(unsigned int value); // prototype

int main(void)
{
	unsigned int number1 = 16; // initialize number1

	// demonstrate bitwise left shift
	puts("\nThe result of left shifting");
	displayBits(number1);
	puts("8 bit positions using the left shift operator << is");
	displayBits(number1 << 8);

	// demonstrate bitwise right shift
	puts("\nThe result of right shifting");
	displayBits(number1);
	puts("8 bit positions using the right shift operator >> is");
	displayBits(number1 >> 4);
}

// display bits of an unsigned int value
void displayBits(unsigned int value)
{
	// declare displayMask and left shift 31 bits
	unsigned int displayMask = 1 << 31;

	printf("%15u = ", value);

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
