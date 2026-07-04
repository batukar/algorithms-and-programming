
// Fig. 6.7: fig06_07.c
// Analyzing a student poll.
#include <stdio.h>

// function main begins program execution
int main(void)
{
    int A, B;
    printf(" Ankete katilacak Ogrenci  sayisini giriniz= ");
    scanf("%d", &A);
    printf(" Ogrencinin verecegi puan sinirini giriniz(min = 1 max iz belirleyiniz)= ");
    scanf("%d", &B);
    printf("\n");
    printf("Ogrencilerin verdigi puanlari teker teker girniz \n");

    int *frequency = new int[B + 1];
    int *responses = new int[A + 1];

    for (int i = 0; i <= B; ++i) {
        frequency[i] = 0;
    }

    for (int i = 1; i <= A; ++i) {
        printf("%d. puan=", i);
        scanf("%d", &responses[i]);
    }

    for (int answer = 1; answer <= A; ++answer) {
        if (responses[answer] >= 1 && responses[answer] <= B) {
            ++frequency[responses[answer]];
        }
    }

    // sonuclari goster
    printf("%s%37s\n", "Puan", "   Puan tekrar sayisi");

    // output the frequencies in a tabular format
    for (int rating = 1; rating <= B; ++rating) {
        printf("%6d%27d\n", rating, frequency[rating]);
    }

    delete [] frequency;
    delete [] responses;

    return 0;
}
