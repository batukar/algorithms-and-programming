#include <stdio.h>

int main(){
    // veri_tipi degisken_adi = deger;

    // int x = 4;
    // printf("%d\n", x);

    // ++x;
    // printf("%d\n", x);
    // printf("%d\n", x);

    // x++;
    // printf("%d\n", x);
    // printf("%d\n", x);

    // int y = 5;
    // int z = 3;
    
    // int max = 0;

    // if( x > y ){ //condition
    //     max = x;
    // }else{
    //     max = y;
    // }

    // max = (x > y) ? x : y; //inline if

    // max = (x > y) ? x : y;
    // max = (max > z) ? max : z;

    // printf("%d", max);

    // int x = 0;
    // printf("sayi gir: \n");
    // scanf("%d", &x);

    // printf("Girilen sayi: %d\n", x);

    // int y = 4;

    // int toplam = 0;

    // toplam *= y;
    // x *= toplam;

    // int x = 6;
    // int toplam = 0; // (n*(n+1)) / 2
    // for (int i = 1; i <= x; i++){
    //     toplam += i;
    // }

    // printf("%d\n", toplam);

    // int faktoriyel = 1;
    // for (int i = 2; i <= x; i++){
    //     faktoriyel *= i;
    // }

    // printf("%d\n", faktoriyel);
    
    // for(;;){
    //     printf("asdasd");
    // }

    for (int i = 1; i < 4; i++){ //satır
        for (int j = 1; j < 4; j++){ // sütun
            // if(i == 2 && j == 2){
            //     printf(" ");
            // }else{
            //     printf("*");
            // }
            if(i == 1 || i == 3){
                printf("*");
            }else if(i == 2){
                if(j == 1 || j == 3){
                    printf("*");
                }else{
                    printf(" ");
                } 
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
}