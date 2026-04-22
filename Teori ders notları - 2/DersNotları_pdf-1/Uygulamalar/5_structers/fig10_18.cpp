// Fig. 10.18: fig10_18.c
// Using an enumeration
#include <stdio.h>

// enumeration constants represent months of the year
enum months {
	JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main(void)
{
	// initialize array of pointers
	const char *monthName[] = {" ", "January", "February", "March",
		"April", "May", "June", "July", "August", "September", "October",
		"November", "December" };
 
	// loop through months
	for (int month = JAN; month <= DEC; ++month) {
		printf("%2d%11s\n", month, monthName[month]);
	}
}
