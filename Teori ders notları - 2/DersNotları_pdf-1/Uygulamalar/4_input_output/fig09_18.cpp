// Fig. 9.18: fig09_18.c

// Reading input with integer conversion specifiers
#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;

	puts("Enter seven integers: ");
	scanf("%d%i%i%i%d%d%d", &a, &b, &c, &d, &e, &f, &g);

	puts("\nThe input displayed as decimal integers is:");
	printf("%d %d %d %d %o %d %X\n", a, b, c, d, e, f, g);
}
