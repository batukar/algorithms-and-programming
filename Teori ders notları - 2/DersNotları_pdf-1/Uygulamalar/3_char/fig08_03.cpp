// Fig. 8.3: fig08_03.c
// Using functions islower, isupper, tolower and toupper
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
		"According to islower:",
		islower('b') ? "b is a " : "b is not a ",
		"lowercase letter",
		islower('B') ? "B is a " : "B is not a ",
		"lowercase letter",
		islower('5') ? "5 is a " : "5 is not a ",
		"lowercase letter",
		islower('!') ? "! is a " : "! is not a ",
		"lowercase letter");

	printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
		"According to isupper:",
		isupper('D') ? "D is an " : "D is not an ",
		"uppercase letter",
		isupper('d') ? "d is an " : "d is not an ",
		"uppercase letter",
		isupper('8') ? "8 is an " : "8 is not an ",
		"uppercase letter",
		isupper('$') ? "$ is an " : "$ is not an ",
		"uppercase letter");
	
	printf("%s%c\n%s%c\n%s%c\n%s%c\n",
		"u converted to uppercase is ", toupper('u'),
		"7 converted to uppercase is ", toupper('7'),
		"$ converted to uppercase is ", toupper('$'),
		"G kucuk harfe donustu  ", tolower('G') );
	}
