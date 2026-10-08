#include <stdio.h>

int main() {
    int numara, not1, not2;
    float ortalama;

    printf("Ogrenci numarasi ve iki notu girin: ");
    scanf("%d %d %d", &numara, &not1, &not2);

    ortalama = (float) (not1 + not2) / 2;

    printf("Ogrenci numarasi: %d\n", numara);
    printf("Ortalama: %.2f\n", ortalama);

    return 0;
}