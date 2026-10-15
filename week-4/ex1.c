#include <stdio.h>

int main(){
    int sonuc;
    int x = 0, y = 0;
    int secim = 0;

    printf("Iki sayi girin: \n");
    scanf("%d ve %d", &x, &y);

    printf("\n1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\n");
    printf("Bir islem secin: \n");
    scanf("%d", &secim);

    switch (secim){
        case 1: // Toplama
            sonuc = x + y;
            printf("%d + %d = %d\n", x, y, sonuc);
            break;
        case 2: // Cikarma
            sonuc = x - y;
            printf("%d - %d = %d\n", x, y, sonuc);
            break;
        case 3: // Carpma
            sonuc = x * y;
            printf("%d * %d = %d\n", x, y, sonuc);
            break;
        case 4: // Bolme
            printf("%d / %d = %.2f\n", x, y, (float) x / y);
            break;
        default:
            printf("Yanlis secim yapildi!\n");
            break;
    }

}