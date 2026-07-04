#include <stdio.h>

int main(){
    int ogrNO; 
    printf("öğrenci numarasını giriniz: "); 
    scanf("%d", &ogrNO); 

    if(ogrNO %2 == 0){ 
        printf("Batuhan %d\n", ogrNO);
    }else
        printf("Karadag %d\n", ogrNO); 