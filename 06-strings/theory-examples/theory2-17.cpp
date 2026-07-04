// Fig. 9.19: fig09_19.c
// Reading input with floating-point conversion specifiers
#include <stdio.h>

// function main begins program execution
int main(void)
{
	double a;
	double b;
	double c;

	puts("Enter three floating-point numbers:");
	scanf("%le%lf%llf", &a, &b, &c);

	printf("\nHere are the numbers entered in plain:");
	puts("floating-point notation:\n");
	printf("%f\n%f\n%f\n", a, b, c);
}
