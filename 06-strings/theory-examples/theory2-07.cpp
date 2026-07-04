// Fig. 6.11: fig06_11.c
// Eðer özel olarak belirtilmediyse Statik diziler 0 olarak baþlatýlýr.
#include <stdio.h>

void staticArrayInit(void); // function prototype
void automaticArrayInit(void); // function prototype

// function main begins program execution
int main(void)
{
	puts("statik dizinin cagrilisi:");
	staticArrayInit();
	staticArrayInit();
	staticArrayInit();
	staticArrayInit();
	staticArrayInit();
	
	puts("otomatik dizinin cagrilisi:");
	automaticArrayInit();
	automaticArrayInit();
	automaticArrayInit();
	automaticArrayInit();
	automaticArrayInit();	
}

// Statik yerel diziyi gösteren fonksiyon 
//(function to demonstrate a static local array)
void staticArrayInit(void)
{
	static int array1[5];
	for (size_t i = 0; i < 5; ++i) {
		printf("array1[%u] = %d\n ", i, array1[i] += 5);
	}
}

// Otomatiik yerel dizinin gösterimi (function to demonstrate an automatic local array)
void automaticArrayInit(void)
{
	int array2[5]={};
	for (size_t i = 0; i < 5; ++i) {
		printf("array2[%u] = %d\n ", i, array2[i] += 5);
	}
}
