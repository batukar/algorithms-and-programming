// nesibe nin cozumu
#include <stdio.h>

int main(){
    int arr[] = {3, 1, 2, 5, 4};
    int *ptr = arr;

    for (int i = 0; i < 5; i++){
        printf("dizi[%d] = %d\n", i, *(ptr + i));
    }
}