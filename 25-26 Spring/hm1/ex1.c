#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXN 1000

int contains(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) return 1;
    }
    return 0;
}

int main() {
    srand(time(NULL));

    int n, minVal, maxVal;

    printf("Dizinin kac elemanli olacagini giriniz: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAXN) {
        printf("Gecersiz eleman sayisi!\n");
        return 0;
    }

    printf("Alt siniri giriniz: ");
    if (scanf("%d", &minVal) != 1) {
        printf("Hatali giris!\n");
        return 0;
    }

    printf("Ust siniri giriniz: ");
    if (scanf("%d", &maxVal) != 1) {
        printf("Hatali giris!\n");
        return 0;
    }

    if (minVal > maxVal) {
        int tmp = minVal;
        minVal = maxVal;
        maxVal = tmp;
    }

    int range = maxVal - minVal + 1;
    if (range < n) {
        printf("Bu aralikta %d adet benzersiz sayi uretilemez!\n", n);
        printf("Aralik kapasitesi: %d (min=%d, max=%d)\n", range, minVal, maxVal);
        return 0;
    }

    int arr[MAXN];

    int filled = 0;
    while (filled < n) {
        int candidate = minVal + rand() % range;

        if (!contains(arr, filled, candidate)) {
            arr[filled] = candidate;
            filled++;
        }
    }

    printf("\nDizi (normal): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nDizi (ters):   ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}