#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    ptr = (int*)malloc(sizeof(int));

    if (ptr == NULL) {
        printf("Bellek ayrilamadi!\n");
        return 1;
    }

    *ptr = 42;

    printf("ptr'nin gosterdigi adres: %p\n", ptr);
    printf("ptr'nin gosterdigi deger: %d\n", *ptr);

    free(ptr);

    return 0;
}
