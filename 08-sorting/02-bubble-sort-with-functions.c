#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

// global int dizisi
int array[SIZE] = {};

int randomNumberGenerator();
void insertArray(int arr[]);
void showArray(int arr[]);
void bubbleSort(int arr[]);
void findMedian(int arr[]);
void findMode(int arr[]);

int main(){
    srand(time(NULL));

    insertArray(array);

    printf("~~~~~ Dizi ~~~~~\n"); // tilda
    showArray(array);

    printf("~~~~ Siralanmis Dizi ~~~~~\n");
    bubbleSort(array);
} 

int randomNumberGenerator(){
    return rand() % 10 + 1;
}

void insertArray(int arr[]){
    for (int i = 0; i < SIZE; i++){
        arr[i] = randomNumberGenerator();
    }
}

void showArray(int arr[]){
    for (int i = 0; i < SIZE; i++){
        printf("Dizinin %d. elemani ([%d]) = %d\n", i + 1, i, arr[i]);
    }
}

void bubbleSort(int arr[]){
    int temp = 0;
    for (int i = 0; i < SIZE - 1; i++){
        for (int j = 0; j < SIZE - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    showArray(arr);
}