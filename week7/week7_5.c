#include <stdio.h>

int main(){
    int x = 5; // 0000 0101
    int y = 4; // 0000 0100

    x = x << 2; // 0001 0100
    y = y >> 1; // 0000 0010

    printf("Yeni x = %d\n", x); // 20
    printf("Yeni y = %d\n", y); // 2

    printf("OR = %d\n", x | y); // 0001 0110 -> 22
}