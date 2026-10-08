#include <stdio.h>

int main() {
    int gun, ay, yil;

    printf("Tarih girin (gg/aa/yyyy): ");
    scanf("%d/%d/%d", &gun, &ay, &yil);

    printf("Gun: %d\n", gun);
    printf("Ay: %d\n", ay);
    printf("Yil: %d\n", yil);

    return 0;
}