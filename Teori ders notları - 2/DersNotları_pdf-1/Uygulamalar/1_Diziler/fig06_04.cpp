


// Fig. 6.4: fig06_04.c
// Initializing the elements of an array with an initializer list.
#include <stdio.h>

// function main begins program execution
int main(void)
{
// use initializer list to initialize array n
	int n[] = {1, 2, 3, 4, 5, 0, 0, 0, 0, 0};

printf("%s%15s\n", "Eleman", "Deger");

// output contents of array in tabular format
	for (size_t i = 0; i < 10; ++i) {
		printf("%7u%13d\n", i, n[i]);
	}
}
