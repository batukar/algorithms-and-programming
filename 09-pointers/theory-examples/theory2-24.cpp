#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	const char *string = "2023ISTE_Blg_Muh";
	char *remainderPtr;
	unsigned long int x = strtoul(string, &remainderPtr, 0);
	printf("%i\n%s\n", x, remainderPtr);
}
