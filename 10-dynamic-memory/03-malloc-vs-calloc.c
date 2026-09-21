#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;

    int *m = (int*)malloc(n * sizeof(int));
    int *c = (int*)calloc(n, sizeof(int));

    if (m == NULL || c == NULL) {
        printf("Bellek ayrilamadi!\n");
        return 1;
    }

    printf("malloc ile ayrilan (cop degerler olabilir): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", m[i]);
    }
    printf("\n");

    printf("calloc ile ayrilan (hepsi 0): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    free(m);
    free(c);

    return 0;
}
