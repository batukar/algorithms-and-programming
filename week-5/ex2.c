#include <stdio.h>

int main(){
    int a = 7;

    switch(a) {
        case 1 ... 6:
            printf("burada!");
            break;
        case 7: 
            printf("slm\n");
            break;
        default:
        printf("selam");
    }

}