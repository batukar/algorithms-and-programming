#include <stdio.h>
void f(int a[])
{
	a[3]=3; int i=0;
	for (i=0; i<5; i++)
	printf("%d", a[i]);
}
int main ()
{
	int a[5]={2}; f(a);
}
