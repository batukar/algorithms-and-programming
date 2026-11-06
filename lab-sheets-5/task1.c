#include <stdio.h>

int main() {
    char aracTipi;
    int saatlikUcret;
    float saat, toplamUcret;

    printf("Arac tipini girin (O/M/K): ");
    scanf(" %c", &aracTipi);

    switch (aracTipi) {
        case 'O':
        case 'o':
            saatlikUcret = 40;
            break;

        case 'M':
        case 'm':
            saatlikUcret = 20;
            break;

        case 'K':
        case 'k':
            saatlikUcret = 60;
            break;

        default:
            printf("Gecersiz arac tipi.\n");
            return 1;
    }

    printf("Kalinan sureyi girin: ");
    if (scanf("%f", &saat) != 1 || saat <= 0) {
        printf("Gecersiz sure.\n");
        return 1;
    }

    toplamUcret = saatlikUcret * saat;

    printf("Toplam ucret: %.2f TL\n", toplamUcret);

    return 0;
}