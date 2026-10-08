#include <stdio.h>

int main(){
    int i = 0;

    printf("Bir deger girin: \n");
    scanf("%d", &i);

    if(i % 3 == 0){
        printf("Sayi 3 e tam bolunuyor!\n");
    }else if(i % 3 != 0){
        printf("Sayi 3 e tam bolunmuyor ve kalan: %d", i % 3);
    }else{
        printf("Baska???");
    }
    
}