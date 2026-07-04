// Fig. 9.21: fig09_21.c
// Using a scan set
#include <stdio.h>

// function main begins program execution
int main(void)
{
	char z[9]; // define array z

	printf("%s", "Enter string: ");
	scanf("%8[arheibm]", z); // search for set of characters

	printf("The input was \"%s\"\n", z);
}
