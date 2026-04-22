// nesibenin diziyi sıralama algoritmasi cozumu

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void input(int dizi[], int elemanSayisi);
void yeni(int dizi[], int elemanSayisi);
void randomNumGenerator(int dizi[], int elemanSayisi);

int main(){
    srand(time(NULL));

    int elemanSayisi;
    printf("kac elemanli olucagini giriniz\n");
    scanf("%d", &elemanSayisi);

    int dizi[elemanSayisi];

    // input(dizi, elemanSayisi);
    randomNumGenerator(dizi, elemanSayisi);
    yeni(dizi, elemanSayisi);

    system("pause");
    return 0;
}

void input(int dizi[], int elemanSayisi){
    printf("sayilari giriniz\n");

    for (int i = 0; i < elemanSayisi; i++){
        printf("%d. sayi = ", i + 1);
        scanf("%d", &dizi[i]);
        printf("\n");
    }
}

void randomNumGenerator(int dizi[], int elemanSayisi){
    for (int i = 0; i < elemanSayisi; i++){
        dizi[i] = rand() % 10 + 1;
    }
}


void yeni(int dizi[], int elemanSayisi){
    int temp = 0;

    if (elemanSayisi < 2) return;

    for (int j = 0; j < elemanSayisi - 1; j++){
        while (dizi[j] > dizi[j + 1]){
            for (int i = 0; i < elemanSayisi - 1; i++){

                temp = (dizi[i] > dizi[i + 1]) ? dizi[i] : dizi[i + 1];
                dizi[i] = (dizi[i] > dizi[i + 1]) ? dizi[i + 1] : dizi[i];
                dizi[i + 1] = temp;

            }
            j = 0;
        }
    }

    for (int i = 0; i < elemanSayisi; i++){
        printf("%d. sayi = %d\n", i + 1 , dizi[i]);
    }
}