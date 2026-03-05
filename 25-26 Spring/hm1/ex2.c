#include <stdio.h>

#define ROWS 5
#define COLS 8

int main() {
    int seats[ROWS][COLS] = {0};
    int row, col;
    char cont = 'E';

    while (cont == 'E' || cont == 'e') {

        printf("Oturmak istediginiz satir numarasini giriniz (1-%d): ", ROWS);
        if (scanf("%d", &row) != 1) {
            printf("Hatali giris! Program sonlandiriliyor.\n");
            return 0;
        }

        printf("Oturmak istediginiz sutun numarasini giriniz (1-%d): ", COLS);
        if (scanf("%d", &col) != 1) {
            printf("Hatali giris! Program sonlandiriliyor.\n");
            return 0;
        }

        if (row < 1 || row > ROWS || col < 1 || col > COLS) {
            printf("Gecersiz satir/sutun girdiniz! Lutfen tekrar deneyin.\n\n");
            continue;
        }

        int r = row - 1;
        int c = col - 1;

        if (seats[r][c] == 1) {
            printf("Sectiginiz koltuk DOLU! Lutfen baska koltuk seciniz.\n\n");
            continue;
        }

        int price = 500 - (row - 1) * 50;
        if (col == 1 || col == 2 || col == 7 || col == 8) {
            price -= 30;
        }

        seats[r][c] = 1;

        printf("\nKoltuk satildi! (Satir: %d, Sutun: %d)\n", row, col);
        printf("Odemeniz gereken bilet fiyati: %d TL\n", price);

        printf("\nBaska koltuk almak istiyor musunuz? (E/H): ");
        scanf(" %c", &cont);
        printf("\n");
    }

    printf("Program sonlandi.\n");
    return 0;
}