#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

// global degisken
int array[SIZE] = {};

// fonksiyon prototipleri
int randomNumGenerator();
void insertArray(int arr[]);
void bubbleSort(int arr[]);
void findMedian(int arr[]);
void findMode(int arr[]);
void showArray(int arr[]);

int main(){
    srand(time(NULL));

    // Rastgele elemandan olusan dizi
    insertArray(array);

    // Kabarcik Siralama ile siralanmis dizi
    bubbleSort(array);

    // Dizinin medyani
    findMedian(array);

    // Dizinin modu
    findMode(array);

    return 0;
}

int randomNumGenerator(){
    return rand() % 10 + 1;
}

void insertArray(int arr[]){
    for (int i = 0; i < SIZE; i++){
        arr[i] = randomNumGenerator();
    }
    printf("~~~~ Dizi ~~~~\n");
    showArray(arr);
}

void bubbleSort(int arr[]){
    int temp = 0;
    for (int i = 0; i < SIZE - 1; i++){
        for (int j = 0; j < SIZE - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("~~~~ Siralanmis Dizi ~~~~\n");
    showArray(arr);
}

void findMedian(int arr[]){
    int median = (SIZE - 1) / 2;
    printf("~~~ Dizinin Medyanı ~~~~\n");
    printf("Dizinin ortanca elemani: arr[%d] = %d\n", median, arr[median]);
}

void findMode(int arr[]){
    int mode = arr[0];
    int modeCount = 1;
    int currentValue = mode;
    int max = 1;

    for (int i = 1; i < SIZE; i++){
        if(arr[i] == currentValue){
            modeCount++;
        }else{
            if(modeCount > max){
                max = modeCount;
                mode = arr[i - 1];
            }
            currentValue = arr[i];
            modeCount = 1;
        }
    }
    if(modeCount > max){
        max = modeCount;
        mode = currentValue;
    }

    printf("~~~ Dizinin Modu ~~~~\n");
    printf("En cok tekrar eden eleman {%d}\n", mode);
    printf("Tekrar sayisi = {%d}\n", max);
}

void showArray(int arr[]){
    for (int i = 0; i < SIZE; i++){
        printf("Dizinin %d. elemani ([%d]) = %d\n", i + 1, i, arr[i]);
    }
}