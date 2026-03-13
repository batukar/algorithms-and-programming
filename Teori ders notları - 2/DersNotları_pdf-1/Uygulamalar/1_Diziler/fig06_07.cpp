// Fig. 6.7: fig06_07.c
// Analyzing a student poll.
#include <stdio.h>
#define RESPONSES_SIZE 40 // define array sizes
#define FREQUENCY_SIZE 11

// function main begins program execution
int main(void)
{
// initialize frequency counters to 0
int frequency[FREQUENCY_SIZE] = {0};

// place the survey responses in the responses array
int responses[RESPONSES_SIZE] = {8, 6, 1, 1, 1, 1, 9, 1, 1, 8,
1, 6, 8, 8, 8, 10, 3, 6, 2, 7, 1, 1, 8, 1, 6, 6, 6, 1, 1, 1,
5, 8, 7, 8, 7, 8, 1, 1, 1, 1};

// for each answer, select value of an element of array responses
// and use that value as an index in array frequency to
// determine element to increment
	for (size_t answer = 0; answer < RESPONSES_SIZE; ++answer) {
		++frequency[responses[answer]];
}

// display results
printf("%s%17s\n", "verilen not", "Frekans");

// output the frequencies in a tabular format
for (size_t rating = 1; rating < FREQUENCY_SIZE; ++rating) {
printf("%6d%17d\n", rating, frequency[rating]);
	} 
}
