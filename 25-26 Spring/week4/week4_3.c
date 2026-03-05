#include <stdio.h>

void arttir(int *ptr);

int main(){
    int x = 5;
    printf("x in adresi = %p\n", &x);
    arttir(&x);
    printf("x = %d\n", x);
}

void arttir(int *ptr){
    (*ptr)++;
}