// Fig. 8.6: fig08_06.c
// Using function strtod
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const char *string = "51.2676543 % are admitted"; // initialize string
	char *stringPtr;// create char pointer

	double d = strtod(string, &stringPtr);

	printf("The string \"%s\" is converted to the\n", string);
	printf("double value %.4f and the string \"%p\"\n", d, &stringPtr);
}
