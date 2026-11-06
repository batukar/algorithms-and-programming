#include <stdio.h>

int main() {
    char tus;
    int x = 0, y = 0;

    printf("Hareket tusunu girin (W/A/S/D): ");
    scanf(" %c", &tus);

    switch (tus) {
        case 'W':
        case 'w':
            y++;
            break;

        case 'S':
        case 's':
            y--;
            break;

        case 'A':
        case 'a':
            x--;
            break;

        case 'D':
        case 'd':
            x++;
            break;

        default:
            printf("Gecersiz tus.\n");
            break;
    }

    printf("Yeni konum: (%d, %d)\n", x, y);

    return 0;
}