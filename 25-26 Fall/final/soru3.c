#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int puan = 0;

int zarAt();
int atis(int n);
int oyuncu();
int bilgisayar();
void oyna(int kazananPuan);

int main(){
    srand(time(0));

    oyna(5);
    
    return 0;
}

int zarAt(){
    return rand() % 6 + 1;
}

int atis(int n){
    int sonuc = 0;
    
    while(n > 0){
        sonuc += zarAt();
        n--;
    }
    return sonuc;
}

int oyuncu(){
    return puan = atis(2);
}

int bilgisayar(){
    return puan = atis(2);
}

void oyna(int kazananPuan){
    int oyuncuSayac = 0, bilgisayarSayac = 0;

    do{
        int oyuncuPuani = oyuncu();
        int bilgisayarPuani = bilgisayar();
        
        if(oyuncuPuani > bilgisayarPuani){
            oyuncuSayac++;
            printf("Oyuncu - Bilgisayar: %d - %d\n", oyuncuSayac, bilgisayarSayac);
        }else if(oyuncuPuani < bilgisayarPuani){
            bilgisayarSayac++;
            printf("Oyuncu - Bilgisayar: %d - %d\n", oyuncuSayac, bilgisayarSayac);
        }else
            printf("Berabere! Oyuncu - Bilgisayar: %d - %d\n", oyuncuSayac, bilgisayarSayac);
    } while (oyuncuSayac < kazananPuan && bilgisayarSayac < kazananPuan);
    
}