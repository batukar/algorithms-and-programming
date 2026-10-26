#include <stdio.h>

int main() {
    int sayi;

    printf("Bir tam sayi girin: ");

    if (scanf("%d", &sayi) != 1) {
        printf("Gecerli bir tam sayi girmelisin.\n");
        return 1;
    }

    if (sayi > 0) {
        printf("Girilen sayi pozitiftir.\n");
    } else if (sayi < 0) {
        printf("Girilen sayi negatiftir.\n");
    } else {
        printf("Girilen sayi sifirdir.\n");
    }

    if (sayi % 2 == 0) {
        printf("Girilen sayi cifttir.\n");
    } else {
        printf("Girilen sayi tektir.\n");
    }

    return 0;
}