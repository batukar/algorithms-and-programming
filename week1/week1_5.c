#include <stdio.h>

#define SIZE 5

int input();
void elemanEkle(int arr[]);
void yazdir(int arr[]);

int main() {
    int dizi[SIZE];

    elemanEkle(dizi);

    yazdir(dizi);

    return 0;
}

int input(){
    int num = 0;
    printf("Sayi girin: \n");
    scanf("%d", &num);

    return num;
}

void elemanEkle(int arr[]){
    for (int i = 0; i < SIZE; i++){
        arr[i] = input();

        if(arr[i] == arr[i - 1]){
            printf("Yeniden - ");
            arr[i] = input();
        }
    }
}

void yazdir(int arr[]){
    for (int i = 0; i < SIZE; i++) {
        printf("dizi[%d] = %d\n", i, arr[i]);
    }
}