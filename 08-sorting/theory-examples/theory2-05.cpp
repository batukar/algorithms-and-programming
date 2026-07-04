#include <stdio.h>
int main(void)
{
	int n;
	printf("Kac Sayi Girilecek:");
	scanf("%d",&n);
	int a[n];
	for(size_t i = 0; i < n ; i++){
		scanf("%d", &a[i]);
	}
	// bubble sort
	for (unsigned int pass = 1; pass < n; ++pass) {
		for (size_t i = 0; i < n - 1; ++i) {
			if (a[i] > a[i + 1]) {
				int hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}
		}
	}
	for (size_t i = 0; i < n; ++i) {
		printf("%4d", a[i]);
	}
}
