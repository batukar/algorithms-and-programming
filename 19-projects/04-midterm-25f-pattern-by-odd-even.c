#include <stdio.h>

int main(){

    long int okulID;
    printf("Sayi girin: \n");
    scanf("%li", &okulID);

    printf("\n");
    if(okulID % 2 == 0){
        for (int i = 0; i < 4; i++){
            for (int j = 0; j < 5; j++){
                if(i == 1 || i == 2){
                    if(j == 1 || j == 2 || j == 3 || j){
                        printf(" ");
                    }else{
                        printf("*");
                    }
                }else{
                    printf("*");
                }
            }
            printf("\n");
        }
    }else{
        for (int i = 0; i < 4; i++){
            for (int j = 0; j < 5; j++){
                if(i == 1 || i == 2  || i == 3){
                    if(j == 0 || j == 1 || j == 3 || j == 4){
                        printf(" ");
                    }else{
                        printf("*");
                    }
                }else{
                    printf("*");
                }
            }
            printf("\n");
        }
    }
}


