#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int array[SIZE] = {};

int randomNumGenerator();
void insertArray(int arr[]);
void bubbleSort(int arr[]);
void showArray(int arr[]);
void findMedian(int arr[]);
void findMode(int arr[]);

int main(){
    srand(time(NULL));

    // diziye rastgele 1-10 arasi deger ekleme
    printf("~~~~~ Dizi ~~~~~\n");
    insertArray(array);

    // diziyi kucukten buyuge siralama
    printf("\n~~~~~ Siralanmis Dizi ~~~~~\n");
    bubbleSort(array);

    // siralanmis dizinin ortanca elemani
    printf("\n~~~~ Dizinin Ortanca Elemani ~~~~\n");
    findMedian(array);

    // siralanmis dizinin en cok tekrar eden elemani
    printf("\n~~~~ Dizinin En Cok Tekrar Eden Elemani ~~~~\n");
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
    showArray(arr);
}

void bubbleSort(int arr[]){
    int temp = 0;
    for (int i = 0; i < SIZE - 1; i++){
        for (int j = 0; j < SIZE - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    showArray(arr);
}

void findMedian(int arr[]){
    int median = SIZE / 2;
    printf("Dizinin ortanca elemani = {%d}\n", arr[median]);
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
    
    printf("Dizinin en cok tekrar eden elemani: {%d}\n", mode);
    printf("Tekrar adedi = %d\n", max);
}

void showArray(int arr[]){
    for (int i = 0; i < SIZE; i++){
        printf("Dizinin %d. elemani ([%d]) = %d\n", i + 1, i, arr[i]);
    }
}