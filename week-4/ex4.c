#include <stdio.h>

int main(){
    int a = 5;

    switch(a) {
        case 1 ... 6:
            printf("burada!");
            break;
        case 7: 
            printf("Burada\n");
            break;
        default:
        printf("varsayılan");
    }

}