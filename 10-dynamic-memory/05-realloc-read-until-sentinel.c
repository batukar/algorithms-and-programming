#include <stdio.h>
#include <stdlib.h>

int main() {
    int kapasite = 2;
    int sayac = 0;
    int *dizi = (int*)malloc(kapasite * sizeof(int));
    int x;

    if (dizi == NULL) {
        printf("Bellek ayrilamadi!\n");
        return 1;
    }

    printf("Sayilari girin (bitirmek icin -1):\n");

    while (1) {
        scanf("%d", &x);
        if (x == -1) {
            break;
        }

        if (sayac == kapasite) {
            kapasite *= 2;
            int *yeni = (int*)realloc(dizi, kapasite * sizeof(int));
            if (yeni == NULL) {
                printf("Bellek buyutulemedi!\n");
                free(dizi);
                return 1;
            }
            dizi = yeni;
            printf("  (kapasite %d oldu)\n", kapasite);
        }

        dizi[sayac] = x;
        sayac++;
    }

    printf("Toplam %d sayi girildi: ", sayac);
    for (int i = 0; i < sayac; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    free(dizi);

    return 0;
}
