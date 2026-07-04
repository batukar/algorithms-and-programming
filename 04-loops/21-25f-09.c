#include <stdio.h>

int main(){
    for(int i = 0 ; i < 5 ; i++){
        for (int j = 0; j < 4; j++){
            if(i == 1 || i == 3 || i == 4){
                if(j == 1 || j == 2 || j == 3){
                    printf(" ");
                }else{
                    printf("f");
                }
            }else if(i == 2 && j == 3){
                printf(" ");
            }else{
                printf("f");
            }
        }
        printf("\n");
    }
    
}