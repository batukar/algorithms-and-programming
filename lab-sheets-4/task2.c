#include <stdio.h>

int main() {
    int sayi1, sayi2;

    printf("Birinci sayiyi girin: ");
    if (scanf("%d", &sayi1) != 1) {
        printf("Gecerli bir tam sayi girin.\n");
        return 1;
    }

    printf("Ikinci sayiyi girin: ");
    if (scanf("%d", &sayi2) != 1) {
        printf("Gecerli bir tam sayi girin.\n");
        return 1;
    }

    if (sayi1 > sayi2) {
        printf("Buyuk olan sayi: %d\n", sayi1);
    } else if (sayi2 > sayi1) {
        printf("Buyuk olan sayi: %d\n", sayi2);
    } else {
        printf("esit\n");
    }

    return 0;
}