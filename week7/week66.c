#include <stdio.h>

int main(){
    int x = 5; // 0000 0101
    int y = 6; // 0000 0110

    int and = x & y; // 0000 0100 = 4
    int or = x | y; // 0000 0111 = 7
    int xor = x ^ y; // 0000 0011 = 3
    int not = ~xor; // 1111 0100 = -4

    // 1111 0011 
    //         1
    // 1111 0100

    printf("AND = %d\n", and);
    printf("OR = %d\n", or);
    printf("XOR = %d\n", xor);
    printf("NOT = %d\n", not);

    int sol = x << 2; // 0000 0101 -> 0001 0100 = 20
    int sag = y >> 1; // 0000 0110 -> 0000 0011 = 3

    printf("2 bit sola = %d\n", sol);
    printf("1 bit saga = %d\n", sag);

}