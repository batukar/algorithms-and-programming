// Fig. 8.2: fig08_02.c
// Using functions isdigit, isalpha, isalnum, and isxdigit
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("%s\n%s%s\n%s%s\n\n", "According to isdigit: ",
		isdigit('8')	? "8 is a " : "8 is not a ", "digit",
		isdigit('A')	? "A is a " : "A is not a ", "digit");

	printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
		 "According to isalpha:",
		isalpha('A')	? "A is a " : "A is not a ", "letter",
		isalpha('b')	? "b is a " : "b is not a ", "letter",
		isalpha('Z')	? "Z is a " : "Z is not a ", "letter",
		isalpha('4')	? "4 is a " : "4 is not a ", "letter");

	printf("%s\n%s%s\n%s%s\n%s%s\n\n",
		"According to isalnum:",
		isalnum('A')	?"A is a " : "A is not a ",
		"digit or a letter",
		isalnum('8')	? "8 is a " : "8 is not a ",
		"digit or a letter",
		isalnum(',')	? "# is a " : "# is not a ",
		"digit or a letter");

	printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n",
		"According to isxdigit:",
		isxdigit('F')	? "F is a " : "F is not a ",
		"hexadecimal digit",
		isxdigit('D')? "D is a " : "D is not a ",
		"hexadecimal digit",
		isxdigit('7')? "7 is a " : "7 is not a ",
		"hexadecimal digit",
		isxdigit('$')? "$ is a " : "$ is not a ",
		"hexadecimal digit",
		isxdigit('f')? "f is a " : "f is not a ",
		"hexadecimal digit");
}
