#include <stdio.h>

int main() {
    int x = 5, y, z;

    printf("Baslangic: x = %d\n", x);

    y = x++;
    printf("1. Adim: x = %d, y = %d\n", x, y);

    z = ++x;
    printf("2. Adim: x = %d, y = %d, z = %d", x, y, z);

    return 0;
}