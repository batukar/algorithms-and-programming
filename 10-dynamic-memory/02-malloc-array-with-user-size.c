#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *dizi;

    printf("Kac eleman girilecek? ");
    scanf("%d", &n);

    dizi = (int*)malloc(n * sizeof(int));

    if (dizi == NULL) {
        printf("Bellek ayrilamadi!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("%d. eleman: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    printf("Girilen elemanlar: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    free(dizi);

    return 0;
}
