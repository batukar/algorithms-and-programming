#include <stdio.h>
#include <stdlib.h>

int main() {
    int satir, sutun;

    printf("Satir sayisi: ");
    scanf("%d", &satir);
    printf("Sutun sayisi: ");
    scanf("%d", &sutun);

    int **matris = (int**)malloc(satir * sizeof(int*));

    if (matris == NULL) {
        printf("Bellek ayrilamadi!\n");
        return 1;
    }

    for (int i = 0; i < satir; i++) {
        matris[i] = (int*)malloc(sutun * sizeof(int));
        if (matris[i] == NULL) {
            printf("Bellek ayrilamadi!\n");
            return 1;
        }
    }

    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            matris[i][j] = i * sutun + j;
        }
    }

    printf("Matris:\n");
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            printf("%3d ", matris[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < satir; i++) {
        free(matris[i]);
    }
    free(matris);

    return 0;
}
