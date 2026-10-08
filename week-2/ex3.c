#include <stdio.h>

int main(){
    float f1,f2;

    printf("2 tane ondalikli sayiyi art arda girin: \n");
    scanf("%f %f", &f1, &f2); // 8. satiri yorum satirindan cikar ve 2 degiskene deger atamayi dene
    //scanf("%f - %f", &f1, &f2);

    printf("Sayilar: %.2f %.2f", f1, f2);
}