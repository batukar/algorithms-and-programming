// Fig. 8.7: fig08_07.c
// Using function strtol
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const char *string = "-12345675678abcdfe"; // initialize string pointer
	char *remainderPtr; // create char pointer

	long x = strtol(string, &remainderPtr, 0);

	printf("%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
		"The original string is ", string,
		"The converted value is ", x,
		"The remainder of the original string is ",
		remainderPtr,
		"The converted value plus 567 is ", x + 567);
}
