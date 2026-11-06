#include <stdio.h>

int main(){
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++)
            printf(" ");
        for (int j = 0; j < 2*i-1; j++) {
            if (j == 0 || j == 2*i-2 || i == n)
                printf("*");
            else
                printf("*");
        }
        printf("\n");
    }
}