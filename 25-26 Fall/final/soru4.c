#include <stdio.h>

int ucretHesapla(int dakika);

int main(){
    int dakika;
    int aracSayisi = 0;
    long int toplamGelir = 0;

    while (1) {
        printf("Park suresi (dakika) giriniz (bitirmek icin 0): ");
        scanf("%d", &dakika);

        if (dakika == 0) break;

        if (dakika < 0 || dakika > 24 * 60) {
            printf("Hata: Sure 1 ile 1440 dakika arasinda olmali!\n\n");
            continue;
        }

        int ucret = ucretHesapla(dakika);

        aracSayisi++;
        toplamGelir += ucret;

        printf("Arac ucreti: %d TL\n\n", ucret);
    }

    printf("~~~ Gun Sonu Raporu ~~~\n");
    printf("Toplam arac sayisi: %d\n", aracSayisi);
    printf("Toplam gelir: %li TL\n", toplamGelir);

    return 0;
}

int ucretHesapla(int dakika) {
    if (dakika <= 30) return 50;
    else if (dakika <= 120) return 100;
    else if (dakika <= 240) return 200;
    else return 400;
}