#include <stdio.h>

int main() {
    int sayac = 0;

    sayac += 5; // sayac = sayac + 5;
    printf("1. Adim: %d\n", sayac);

    sayac *= 3; // sayac = sayac * 3;
    printf("2. Adim: %d\n", sayac);

    sayac -= 4; // sayac = sayac - 4;
    printf("3. Adim: %d\n", sayac);

    sayac /= 2; // sayac = sayac / 2;
    printf("4. Adim: %d", sayac);

    return 0;
}