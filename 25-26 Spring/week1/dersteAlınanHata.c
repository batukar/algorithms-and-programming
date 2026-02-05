// cozum.c adlı dosyada hata çözülmüştür

#include <stdio.h>

#define SIZE 5

int input();
void elemanEkle(int array[]);
int kontrol(int arr[], int aranan);
void yazdir(int arr[]);

int main(){
    int dizi[SIZE];

    elemanEkle(dizi);

    yazdir(dizi);
    
}

int input(){
    int num;
    printf("Sayi girin: \n");
    scanf("%d", &num);

    return num;
}

void elemanEkle(int array[]){
    int cont = 0;

    array[0] = input();

    for (int i = 1; i < SIZE; i++){
        

        cont = kontrol(array, array[i]);
        printf("cont = %d\n",cont);
        if(cont){
            printf("Yeniden - ");
            array[i] = input();
        }
        array[i] = input();

    }
}

// doğrusal arama
int kontrol(int arr[], int aranan){
    
    for (int i = 0; i < SIZE; i++){
        if(aranan == arr[i]){
            printf("arr[%d] = %d - ", i, arr[i]);
            printf("Aranan var\n");
            yazdir(arr);
            return 1;
        }else{
            printf("arr[%d] = %d - ", i, arr[i]);
            printf("Aranan yok\n");
            yazdir(arr);
            return 0;
        }
    }
}

void yazdir(int arr[]){
    for (int i = 0; i < SIZE; i++){
        printf("dizi[%d] = %d\n", i, arr[i]);
    }
    printf("\n");
}