#include <stdio.h>

int input();
int fact(int number);

int main(){
    int num = input();

    if(num < 0) printf("Negatif sayilarin faktoriyeli hesaplanamaz!\n");
    else printf("%d! = %d\n", num, fact(num));

    return 0;
}

int input(){
    int in = 0;
    printf("Sayi girin: \n");
    scanf("%d", &in);
    
    return in;
}

int fact(int number){
    return (number < 1) ? 1 : number * fact(number - 1);
}
