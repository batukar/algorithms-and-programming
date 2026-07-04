#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int input();
void zarAt(int times);

int main(){
    srand(time(0));

    int in = input(); // input() gelen c idi
    zarAt(in);
}

int input(){
    int c = 0;
    printf("Kac kere zar atilsin?\n");
    scanf("%d", &c);
    
    return c; // kullanicinin girdigi sayi
}

void zarAt(int times){ // times = in
    int bir = 0, iki = 0, uc = 0, // yuzleri saklamak icin
        dort = 0, bes = 0, alti = 0; // sayaclar
    int zar = 0; // zar yuzunu belirlemek icin kullanacagim degisken

    for (int i = 0; i < times; i++){
        zar = rand() % 6 + 1; // 1-6 arası zar yuzeyi uretir
        printf("%d. atista zardaki sayi = %d\n", i, zar);

        // if(zar == 1) bir++;
        // else if(zar == 2) iki++;
        // ...
        switch (zar){
        case 1:
            bir++;
            break;
        case 2:
            iki++;
            break;
        case 3:
            uc++;
            break;
        case 4:
            dort++;
            break;
        case 5:
            bes++;
            break;
        case 6:
            alti++;
            break;
        default:
            printf("Hata!\n");
            break;
        }
    }

    printf("%d kere 1 geldi\n", bir);
    printf("%d kere 2 geldi\n", iki);
    printf("%d kere 3 geldi\n", uc);
    printf("%d kere 4 geldi\n", dort);
    printf("%d kere 5 geldi\n", bes);
    printf("%d kere 6 geldi\n", alti);

}

