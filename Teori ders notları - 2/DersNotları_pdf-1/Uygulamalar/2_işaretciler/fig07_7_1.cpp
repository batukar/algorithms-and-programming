#include <stdio.h>
void Reference(int *nPtr);
int main(void)
{
	int number = 6;
	Reference(&number);
	printf("\n%d", number);
}
void Reference(int *nPtr)
{
	*nPtr = *nPtr * *nPtr;
}
