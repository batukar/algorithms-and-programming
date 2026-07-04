#include <stdio.h>
int main(void)
{
	char x[4];
	char y[12];
	printf("%s", "Enter a string: ");
	scanf("%4s%12s", x, y);
	printf("%s\n%s\n", x, y);
}
