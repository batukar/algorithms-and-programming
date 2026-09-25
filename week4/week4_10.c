#include <stdio.h>

int main(){
    int num = 10;
    int *ptr = &num;
    int **pptr = &ptr;

    printf("Sayi = %d\n", num);
    printf("Pointer in tuttugu deger = %d\n", *ptr);
    printf("Double Pointer in tuttugu deger = %d\n", **pptr);
}