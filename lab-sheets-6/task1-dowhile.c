#include <stdio.h>

int main() {
    int i = 0;

    do {
        i++;

        if (i % 3 == 0) continue;

        printf("%d ", i);

    } while (i < 20);

    return 0;
}