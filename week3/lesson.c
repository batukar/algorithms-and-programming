#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLS 3

// global dizi tanimlamalari
int arrayA[ROWS][COLS] = {};
int arrayB[ROWS][COLS] = {};
int target[ROWS][COLS] = {};

// fonksiyon prototipleri
void randomValueGenerator(int arr[ROWS][COLS]);
void sumMatris(int arrA[ROWS][COLS], int arrB[ROWS][COLS]);
void multiMatris(int arrA[ROWS][COLS], int arrB[ROWS][COLS]);
void transpose(int arr[ROWS][COLS]);
void showMatrix(int arr[ROWS][COLS]);

int main(){
    srand(time(NULL));

    printf("A matrisi:\n");
    randomValueGenerator(arrayA);

    printf("\nB matrisi:\n");
    randomValueGenerator(arrayB);

    printf("\nA + B matrisi\nHedef Matris:\n");
    sumMatris(arrayA, arrayB);

    printf("\nB matrisi Transpozu:\n");
    transpose(arrayB);
}

void randomValueGenerator(int arr[ROWS][COLS]){
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            arr[i][j] = rand() % 6;
        }
    }
    showMatrix(arr);
}

void sumMatris(int arrA[ROWS][COLS], int arrB[ROWS][COLS]){
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            target[i][j] = arrA[i][j] + arrB[i][j];
        }
    }
    showMatrix(target);
}

void multiMatris(int arrA[ROWS][COLS], int arrB[ROWS][COLS]){
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            target[i][j] = 0;
            for (int k = 0; k < COLS; k++){
                target[i][j] += arrA[i][k] * arrB[k][j];
            }
        }
    }
    showMatrix(target);
}

void transpose(int arr[ROWS][COLS]){
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    
}

void showMatrix(int arr[ROWS][COLS]){
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}