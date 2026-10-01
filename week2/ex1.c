#include <stdio.h>

int main(){
    int x; // baslangic tanimlamasi

    x = 7; // deger atama

    printf("Fiyat girin: \n"); // kod calismasi icin satira ihtiyac var mi?
    scanf("%d", &x); // & olmadan olur mu? bu satir 6. satirdakini ezer.

    x = 5; // bu satirda 9. satirdakini ezer.

    printf("x + 3 = %d\n", x + 3);
}