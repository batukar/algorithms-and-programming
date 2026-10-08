#include <stdio.h>

int main(){
    int bolunen = 0;
    int bolen = 0;

    printf("Bolunen sayiyi girin: \n");
    scanf("%d", &bolunen);

    printf("Bolen sayiyi girin: \n");
    scanf("%d", &bolen);

    int kalan = bolunen % bolen;

    if(kalan == 0){
        printf("%d sayisi %d sayisina tam bolunur", bolunen, bolen);
    }else{
        printf("%d sayisi %d sayisina tam bolunmez. kalan= %d", bolunen, bolen, kalan);
    }
    
}