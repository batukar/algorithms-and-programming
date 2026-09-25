#include <stdio.h>

int main(){
    int arr[] = {3, 1, 2, 5, 4};
    int mat[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int (*ptr)[5] = &arr;
    int (*pptr)[2][3] = &mat;

    for (int i = 0; i < 5; i++){
        printf("%d\n", (*ptr)[i]);
    }
    
    printf("~~~~~~~~~~~\n");

    printf("%d\n", (*pptr)[1][2]);
}