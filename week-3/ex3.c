#include <stdio.h>

int main(){
    int i = 3;
    int y = 0;

    y = i++;

    printf("i = %d\n", i);
    printf("y = %d\n", y);
    printf("-------\n");

    y = ++i;

    printf("i = %d\n", i);
    printf("y = %d\n", y);
    printf("-------\n");

    y = ++i;
    y = i++;

    printf("i = %d\n", i);
    printf("y = %d\n", y);
    printf("-------\n");

}