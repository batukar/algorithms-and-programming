#include <stdio.h>
int main(void)
{
	char z[9];
	printf("%s", "Bir metin giriniz ");
	scanf("%8[blgsyr]", z); // search for set of characters
	printf("The input was \"%s\"\n", z);
}
