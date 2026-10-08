#include <stdio.h>

int main(){
    int x,y,z = 5; // baslangicta x in degeri yok ama z nin olabilir.

    printf("Fiyat girin: \n");
    scanf("%d", &x);

    printf("Fiyat girin: \n");
    scanf("%d", &y);

    int sonuc = x + y * z / 4; // islem onceligine dikkat!

    printf("Sonuc= %d", sonuc);
    
    // calistirip: x'e 3 ve y'ye 5 girdiginde 9 sonucunu alabildin mi?
    // farkli sayilarla da dene
}