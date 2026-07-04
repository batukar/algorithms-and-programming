#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dizi[500];
    int sayac[101] = {0};

    srand(time(NULL));

    for (int i = 0; i < 500; i++) {
        dizi[i] = rand() % 100 + 1;
        sayac[dizi[i]]++;
    }

    printf("Sayi\tAdet\n");
    printf("----\t----\n");
    for (int i = 1; i <= 100; i++) {
        printf("%d\t%d\n", i, sayac[i]);
    }

    return 0;
}