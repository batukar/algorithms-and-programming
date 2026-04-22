#include <stdio.h>

void swap(char *label, int *ptr1, int *ptr2);

int main(){
    int firstNumber = 1;
    int secondNumber = 3;

    printf("%d%d\n", firstNumber, secondNumber);

    swap("Yer degistirildikten sonra:\n", &firstNumber, &secondNumber);
}

void swap(char *label, int *ptr1, int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("%s%d%d\n", label, *ptr1, *ptr2);
}