#include <stdio.h>

int input();
int fact(int num);


int main(){
    int x = input();
    int result = 0;
    
    
    result = (x < 0) ? 0 : fact(x);

    
    printf("%d! = %d\n", x, result);
}

int input(){
    int in = 0;
    printf("Sayi girin: \n");
    scanf("%d", &in);

    return in;
}

int fact(int num){
     return (num <= 1) ? 1 : num * fact(num - 1);
}