#include <stdio.h>

int main(){
    int sonuc;
    int x = 0, y = 0;
    char s;

    printf("Iki sayi girin: \n");
    scanf("%d ve %d", &x, &y);

    printf("\n+ : Toplama\n- : Cikarma\n* : Carpma:\n/ : Bolme\n");
    printf("Bir islem secin: \n");
    scanf(" %c", &s); // % ile c arasındaki boşluğa dikkat!

    switch (s){
        case '+': // Toplama
            sonuc = x + y;
            printf("%d + %d = %d\n", x, y, sonuc);
            break;
        case '-': // Cikarma
            sonuc = x - y;
            printf("%d - %d = %d\n", x, y, sonuc);
            break;
        case '*': // Carpma
            sonuc = x * y;
            printf("%d * %d = %d\n", x, y, sonuc);
            break;
        case '/': // Bolme
            printf("%d / %d = %.2f\n", x, y, (float) x / y);
            break;
        default:
            printf("Yanlis secim yapildi!\n");
            break;
    }

}