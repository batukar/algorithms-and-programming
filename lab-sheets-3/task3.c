#include <stdio.h>

int main() {
    float fiyat;

    printf("Urunun fiyatini girin: ");
    scanf("%f", &fiyat);

    fiyat *= 1.18; // fiyat = fiyat * 1.18;

    printf("KDV dahil fiyat: %.2f TL", fiyat);

    return 0;
}