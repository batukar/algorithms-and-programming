#include <stdio.h>

int main(){
    int taban = 0;
    int us = 0;
    int sonuc = 1;

    printf("taban sayisi girin: \n");
    scanf("%d", &taban);
    printf("us sayisi girin: \n");
    scanf("%d", &us);

    for (int i = 0; i < us; i++){
        sonuc *= taban;
    }
    
    printf("%d^%d = %d\n", taban, us, sonuc);

}