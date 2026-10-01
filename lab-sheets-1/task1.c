#include <stdio.h>

int main() {
    int tamSayi1 = 44, tamSayi2 = 27, tamSayi3 = 31;
    float ondalikSayi1 = 3.14, ondalikSayi2 = 2.71, ondalikSayi3 = 1.618;
    char karakter1 = 'B', karakter2 = 'E', karakter3 = 'M';

    printf("Tam sayilar: %d %d %d\n", tamSayi1, tamSayi2, tamSayi3);
    printf("Ondalikli sayilar: %.2f %.2f %.3f\n", ondalikSayi1, ondalikSayi2, ondalikSayi3);
    printf("Karakterler: %c %c %c", karakter1, karakter2, karakter3);

    return 0;
}