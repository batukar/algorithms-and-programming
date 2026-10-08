#include <stdio.h>

int main(){
    int i = 5;

    i = i + 6;
    i += 3;

    printf("1. %d\n", i);

    i *= 2;

    printf("2. %d\n", i);

    i /= 4;

    printf("3. %d\n", i);

}