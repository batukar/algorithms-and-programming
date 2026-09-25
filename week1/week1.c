#include <stdio.h>

#define SIZE 5

int n = 0;

int input();
void elemanEkle(int arr[]);
void yazdir(int arr[]);

int main(){
    int dizi1[SIZE] = {1,4,2,6,3};
    float dizi2[SIZE - 2] = {2.1, 3.5233, 2.1237};
    int dizi3[SIZE] = {8,21,433,2,96};
    int dizi4[SIZE - 1];

    yazdir(dizi1);
    yazdir(dizi3);

    for (int j = 0; j < SIZE - 2; j++){
        printf("dizi2[%d] = %.2f\n", j, dizi2[j]);
    }

    printf("\n");
    elemanEkle(dizi4);

    yazdir(dizi4);
}



int input(){
    int num = 0;
    printf("Sayi girin: \n");
    scanf("%d", &num);

    return num;
}

void elemanEkle(int arr[]){
    for (int i = 0; i < SIZE - 1; i++){
        arr[i] = input();
    }
    
}

void yazdir(int arr[]){
    for (int i = 0; i < n; i++){
        printf("dizi[%d] = %d\n", i, arr[i]);
    }
    printf("\n");
    
}