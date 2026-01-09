#include <stdio.h>

// global degisken
int n = 0;

// fonksiyon prototipi
int function(int n);
int input();

int main(){
    int result = 0;

    n = input();
    result = function(n);
    printf("x(%d) = %d\n", n, result);
    
    return 0;
}

int input(){
    do{
        printf("pozitif bir n sayisi girin: \n");
        scanf("%d", &n);
    } while (n < 1);

    return n;
}

int function(int n){
    if(n == 1 || n == 2 || n == 3){
        return 1;
    }else{
        return function(n - 1) * function(n - 2) + function(n - 3);
    }
}