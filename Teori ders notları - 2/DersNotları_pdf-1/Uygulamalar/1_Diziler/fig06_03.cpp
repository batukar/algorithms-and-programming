// Fig. 6.3: fig06_03.c
// Initializing the elements of an array to zeros.
#include <stdio.h>

// function main begins program execution
int main(void)
{
	int n[20]; // n is an array of five integers

// set elements of array n to 0
//Burada 0 yerine diziye baþka deðerler veya deðiþken atanabilir
	for (size_t i = 0; i < 20; ++i) {
		n[i] = i*5+2; // burada görüldüðü gibi
	}
	
printf("%s%15s\n", "Eleman", "Deger");	

// output contents of array n in tabular format
	for (size_t i = 0; i < 20; ++i) {
		printf("%d%15d\n", i, n[i]);
	}
}
