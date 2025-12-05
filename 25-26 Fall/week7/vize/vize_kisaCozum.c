#include <stdio.h>

int main(){

    long int okulID;
    printf("Sayi girin: \n");
    scanf("%li", &okulID);

    printf("\n");
    if(okulID % 2 == 0){
        for (int i = 0; i < 4; i++){
            for (int j = 0; j < 5; j++){
                if(i == 0 || i == 3 || j == 0){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }else{
        for (int i = 0; i < 4; i++){
            for (int j = 0; j < 5; j++){
               if(i == 0 || j == 2){
                    printf("*");
               }else{
                printf(" ");
               }
            }
            printf("\n");
        }
    }
}


