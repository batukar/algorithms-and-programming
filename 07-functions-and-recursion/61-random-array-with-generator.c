#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

// global int dizisi
int array[SIZE] = {};

int randomNumberGenerator();
void insertArray(int arr[]);
void showArray(int arr[]);

int main(){
    srand(time(NULL));

    insertArray(array);

    printf("~~~~~ Dizi ~~~~~\n");
    showArray(array);
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