#include <stdio.h>

void yazdir(int *ptr);

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    yazdir(ptr);
}

void yazdir(int *ptr){
    for (int i = 0; i < 5; i++){
        printf("dizi[%d] = %d\n", i, *(ptr + i));
    }
}
