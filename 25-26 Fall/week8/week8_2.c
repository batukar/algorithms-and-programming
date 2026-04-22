#include <stdio.h>

// global değişken
int result = 1;

// fonksiyon protototipi
int faktoriyel(int x);

int main(){
    int a, result = 0;
    
    printf("Bir sayi girin: \n");
    scanf("%d", &a);

    result = faktoriyel(a);
    printf("%d! = %d\n", a, result);
}

int faktoriyel(int x){
    for (int i = 2; i <= x; i++){
        result *= i;
    }

    return result;
}