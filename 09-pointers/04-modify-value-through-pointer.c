#include <stdio.h>

int main(){
    int number = 44;
    int *ptrNum = &number;

    printf("Sayi: %d\n", number);
    printf("Sayi degiskeninin adresi: %p\n", &number);
    printf("Pointer ile adresi: %p\n",ptrNum);
    printf("Pointer ile degeri: %d\n", *ptrNum);

    *ptrNum = 31;

    printf("Pointer ile yeni deger = %d\n", *ptrNum);
    printf("Pointer ile yeni adres = %p\n", ptrNum);
}