#include <stdio.h>

int main(){
    int x = 9;        // 0000 1001
    int y = 14;       // 0000 1110

    int sol = y << 3; // 0111 0000
    int sag = x >> 2; // 0000 0010

    // 0111 0000 = 16 + 32 + 64 = 112
    // 2

    int or = sol | sag;
    
    printf("sol AND sag = %d\n", or);




    
}