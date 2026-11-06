#include <stdio.h>

int main() {
    char oyuncu1, oyuncu2;

    printf("1. oyuncunun secimini girin (T/K/M): ");
    scanf(" %c", &oyuncu1);

    printf("2. oyuncunun secimini girin (T/K/M): ");
    scanf(" %c", &oyuncu2);

    switch (oyuncu1) {
        case 'T':
        case 't':
            switch (oyuncu2) {
                case 'T':
                case 't':
                    printf("Berabere. Iki oyuncu da tas secti.\n");
                    break;

                case 'K':
                case 'k':
                    printf("2. oyuncu kazandi. Kagit tasi sarar.\n");
                    break;

                case 'M':
                case 'm':
                    printf("1. oyuncu kazandi. Tas makasi kirar.\n");
                    break;

                default:
                    printf("2. oyuncunun secimi gecersiz.\n");
                    break;
            }
            break;

        case 'K':
        case 'k':
            switch (oyuncu2) {
                case 'T':
                case 't':
                    printf("1. oyuncu kazandi. Kagit tasi sarar.\n");
                    break;

                case 'K':
                case 'k':
                    printf("Berabere. Iki oyuncu da kagit secti.\n");
                    break;

                case 'M':
                case 'm':
                    printf("2. oyuncu kazandi. Makas kagidi keser.\n");
                    break;

                default:
                    printf("2. oyuncunun secimi gecersiz.\n");
                    break;
            }
            break;

        case 'M':
        case 'm':
            switch (oyuncu2) {
                case 'T':
                case 't':
                    printf("2. oyuncu kazandi. Tas makasi kirar.\n");
                    break;

                case 'K':
                case 'k':
                    printf("1. oyuncu kazandi. Makas kagidi keser.\n");
                    break;

                case 'M':
                case 'm':
                    printf("Berabere. Iki oyuncu da makas secti.\n");
                    break;

                default:
                    printf("2. oyuncunun secimi gecersiz.\n");
                    break;
            }
            break;

        default:
            printf("1. oyuncunun secimi gecersiz.\n");
            break;
    }

    return 0;
}