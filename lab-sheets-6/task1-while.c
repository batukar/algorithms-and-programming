#include <stdio.h>

int main() {
    int i = 0;

    while (i < 20) {
        i++;

        if (i % 3 == 0) continue;

        printf("%d ", i);
    }

    return 0;
}