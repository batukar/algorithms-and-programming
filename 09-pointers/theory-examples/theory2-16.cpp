#include <stdio.h>
int main(void)
{
	int a = 2023;
	int *aPtr = &a;
	printf("\n%p\n%d", &*aPtr, *aPtr);
}
