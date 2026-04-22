#include <stdio.h>

//fonksiyon prototipi
int input();
int sum(int a, int b);
int times(int a, int b);
int divide(int x, int y);
int minus(int birinciSayi, int ikinciSayi); // parametre isimlendirmeleri size bagli

int main(){
    int a, b, toplam, carpim, fark, bolum = 0;

    a = input();
    b = input();

    toplam = sum(a, b);
    carpim = times(a, b);
    bolum = divide(a, b);
    fark = minus(a, b);

    printf("Toplam = %d\n", toplam);
    printf("Carpim = %d\n", carpim);
    printf("Bolum = %d\n", bolum);
    printf("Fark = %d\n", fark);

}

int input(){
    int x = 0;
    printf("Sayi girin: \n");
    scanf("%d", &x);

    return x;
}

int sum(int a, int b){
    return a + b;
}

int times(int a, int b){
    return a * b;
}

int divide(int x, int y){
    return x / y;
}

int minus(int birinciSayi, int ikinciSayi){
    if(birinciSayi > ikinciSayi){
        return birinciSayi - ikinciSayi;
    }else{
        return ikinciSayi - birinciSayi;
    }
}