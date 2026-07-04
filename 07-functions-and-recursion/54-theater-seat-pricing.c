#include <stdio.h>

#define SATIR 5
#define SUTUN 8

int fiyatHesapla(int satir, int sutun) {
    int fiyat = 500 - ((satir - 1) * 50);

    if (sutun == 1 || sutun == 2 || sutun == 7 || sutun == 8)
        fiyat -= 30;

    return fiyat;
}

int tumKoltuklarDoluMu(int salon[SATIR][SUTUN]) {
    for (int i = 0; i < SATIR; i++) {
        for (int j = 0; j < SUTUN; j++){
            if (salon[i][j] == 0)
                return 0; 
        }
    }

    return 1;
}

void salonYazdir(int salon[SATIR][SUTUN]) {
    printf("\nSALON DURUMU\n\n");

    for (int i = 0; i < SATIR; i++){
        for (int j = 0; j < SUTUN; j++)
            printf("%d ", salon[i][j]);
        
        printf("\n");
    }

    printf("\n0 = Bos Koltuk\n");
    printf("1 = Dolu Koltuk\n\n");
}

int main() {
    int salon[SATIR][SUTUN] = {0};
    int satir, sutun;
    int fiyat;

    printf("~~~ KONSER BILET SISTEMI ~~~\n");

    while (!tumKoltuklarDoluMu(salon)) {
        salonYazdir(salon);

        printf("Satir numarasi giriniz (1-5): ");
        scanf("%d", &satir);
        printf("Sutun numarasi giriniz (1-8): ");
        scanf("%d", &sutun);

        if (satir < 1 || satir > 5 || sutun < 1 || sutun > 8) {
            printf("\nHATA: Gecersiz satir veya sutun girdiniz!\n\n");
            continue;
        }

        if (salon[satir - 1][sutun - 1] == 1) {
            printf("\nBu koltuk doludur! Lutfen baska koltuk seciniz.\n\n");
            continue;
        }

        fiyat = fiyatHesapla(satir, sutun);
        printf("\nBilet Fiyati: %d TL\n", fiyat);
        salon[satir - 1][sutun - 1] = 1;
        printf("Bilet satin alma basarili!\n\n");
    }

    printf("Tum biletler satilmistir!\n");
    return 0;
}