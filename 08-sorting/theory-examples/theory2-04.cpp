#include <stdio.h>
int main(void)
{
	int a[5] = {12, 1,2,34,45};
	// bubble sort
	for (unsigned int pass = 1; pass < 5; ++pass) {
		for (size_t i = 0; i < 5 - 1; ++i) {
			if (a[i] > a[i + 1]) {
				int hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}
		}
	}
	for (size_t i = 0; i < 5; ++i) {
		printf("%4d", a[i]);
	}
}
