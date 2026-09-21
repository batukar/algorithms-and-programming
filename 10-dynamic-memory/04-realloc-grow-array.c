#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 3;
    int *dizi = (int*)malloc(n * sizeof(int));

    if (dizi == NULL) {
        printf("Bellek ayrilamadi!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        dizi[i] = (i + 1) * 10;
    }

    printf("Ilk hali (%d eleman): ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    n = 6;
    int *yeni = (int*)realloc(dizi, n * sizeof(int));

    if (yeni == NULL) {
        printf("Bellek buyutulemedi!\n");
        free(dizi);
        return 1;
    }
    dizi = yeni;

    for (int i = 3; i < n; i++) {
        dizi[i] = (i + 1) * 10;
    }

    printf("Buyutulmus hali (%d eleman): ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    free(dizi);

    return 0;
}
