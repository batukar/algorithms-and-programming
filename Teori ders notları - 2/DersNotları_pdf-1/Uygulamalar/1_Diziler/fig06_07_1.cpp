
// Fig. 6.7: fig06_07.c
// Analyzing a student poll.
#include <stdio.h>
#define RESPONSES_SIZE A // dizi buyuklugunu tanimlayin
#define FREQUENCY_SIZE B 

// function main begins program execution
int main(void)
{
	int A,B;
printf(" Ankete katilacak Ogrenci  sayisini giriniz= ");
scanf("%d",&A);
printf(" Ogrencinin verecegi puan sinirini giriniz(min = 1 max iz belirleyiniz)= ");
scanf("%d",&B);
printf("\n");
printf("Ogrencilerin verdigi puanlari teker teker girniz \n");

FREQUENCY_SIZE = {B+1};
RESPONSES_SIZE = {A};
int frequency[FREQUENCY_SIZE] = {0};
int responses[RESPONSES_SIZE] = {0};
for(int i=1;i<=RESPONSES_SIZE;i++)
{
	printf("%d. puan=",i);
	scanf("%d",&responses[i]);	
//int responses[RESPONSES_SIZE] = {i};

}

	for (int answer = 0; answer <= RESPONSES_SIZE; ++answer) {
		++frequency[responses[answer]];
}

// sonuclari goster
printf("%s%37s\n", "Puan", "   Puan tekrar sayisi");

// output the frequencies in a tabular format
for (int rating = 1; rating < FREQUENCY_SIZE; rating++) {
printf("%6d%27d\n", rating, frequency[rating]);
	} 
}
