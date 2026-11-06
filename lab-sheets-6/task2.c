#include <stdio.h>

int main() {
    int sayi, toplam = 0;

    while (1) {
        printf("Bir sayi girin: ");
        scanf("%d", &sayi);

        if (sayi < 0) break;

        toplam += sayi;
    }

    printf("Toplam: %d\n", toplam);

    return 0;
}