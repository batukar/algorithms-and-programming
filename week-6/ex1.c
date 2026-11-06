#include <stdio.h>

int main(){
    int input = 0;
    int fak = 1;

    printf("Sayi girin: \n");
    scanf("%d", &input);

    for (int i = 2; i <= input; i++){
        fak *= i;
    }

    printf("%d! = %d\n", input, fak);
    
}