#include <stdio.h>

#define SIZE 5

int main(){
    int dizi[SIZE] = {10, 20, 30, 40, 50};

    for (int i = 0; i < SIZE; i++) {
        printf("dizi[%d] = %d\n", i, dizi[i]);
    }

    return 0;
}