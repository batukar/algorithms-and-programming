// Fig. 6.9: fig06_09.c
// Roll a six-sided die 60,000,000 times
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

// function main begins program execution
int main(void)
{
unsigned int frequency[SIZE] = {0}; // clear counts

srand(time(NULL)); // seed random number generator

// roll die 60,000,000 times
	for (unsigned int roll = 1; roll <= 60000000; ++roll) {
		size_t face = 1 + rand() % 6;
		++frequency[face]; // replaces entire switch of Fig. 5.12
	}

	printf("%s%17s\n", "Face", "Frequency");

// output frequency elements 1-6 in tabular format
	for (size_t face = 1; face < SIZE; ++face) {
		printf("%4d%17d\n", face, frequency[face]);
	}
}
