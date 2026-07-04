#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *dosya;

    char ad[30];
    char soyad[30];
    char ders[50];

    int ogrNo;
    long long tcNo;
    int sinif;

    dosya = fopen("batukar.txt", "w");

    if (dosya == NULL) {
        printf("Dosya acilamadi!\n");
        return 1;
    }

    printf("Kayit giriniz.\n");
    printf("Cikis icin EOF kullaniniz (CTRL+Z).\n\n");

    while (1) {
        printf("Ad: ");

        if (scanf("%s", ad) == EOF)
            break;

        printf("Soyad: ");
        scanf("%s", soyad);

        printf("Ogrenci No: ");
        scanf("%d", &ogrNo);

        printf("TC No: ");
        scanf("%lld", &tcNo);

        printf("Sinif: ");
        scanf("%d", &sinif);

        printf("Ders: ");
        scanf("%s", ders);

        fprintf(dosya, "Ad: %s\nSoyad: %s\nOgrenci No: %d\nTC No: %lld\nSinif: %d\nDers: %s\n\n",
                ad, soyad, ogrNo, tcNo, sinif, ders);

        printf("\nKayit basariyla eklendi!\n\n");
    }

    fclose(dosya);
    printf("\nDosya kapatildi.\n");
    return 0;
}