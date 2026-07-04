// Fig. 11.10: fig11_10.c
// Creating a random-access file sequentially
#include <stdio.h>

// clientData structure definition
struct clientData {
unsigned int acctNum; // account number
char lastName[15]; // account last name
char firstName[10]; // account first name
double balance; // account balance
};

int main(void)
{
	FILE *cfPtr; // accounts.dat file pointer

	// fopen opens the file; exits if file cannot be opened
	if ((cfPtr = fopen("simge.dat", "wb")) == NULL) {
		puts("File could not be opened.");
	}
	else {
		// create clientData with default information
		struct clientData blankClient = {0, "", "", 0.0};

		// output 100 blank records to file
		for (unsigned int i = 1; i <= 100; ++i) {
		fwrite(&blankClient, sizeof(struct clientData), 1, cfPtr);
		}
		
		fclose (cfPtr); // fclose closes the file
	}
}
