#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(sizeof(int));

    if (ptr == NULL) {
        printf("Bellek ayrilamadi!\n");
        return 1;
    }

    *ptr = 100;
    printf("free oncesi deger: %d\n", *ptr);

    free(ptr);
    ptr = NULL;

    if (ptr == NULL) {
        printf("ptr artik NULL, guvenle kontrol edilebilir.\n");
    }

    return 0;
}
