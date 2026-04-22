#include <stdio.h>

#define SIZE 5

void yazdir(int arr[]);

int main() {
    int dizi[SIZE] = {10, 20, 30, 40, 50};

    yazdir(dizi);

    return 0;
}

void yazdir(int arr[]){
    for (int i = 0; i < SIZE; i++) {
        printf("dizi[%d] = %d\n", i, arr[i]);
    }
}