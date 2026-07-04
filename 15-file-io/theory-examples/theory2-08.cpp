// Fig. 11.6: fig11_06.c
// Reading and printing a sequential file
#include <stdio.h>

int main(void)
{
	FILE *cfPtr; // cfPtr = clients.txt file pointer

	// fopen opens file; exits program if file cannot be opened
	if ((cfPtr = fopen("simgeplatin.txt", "r")) == NULL) {
		puts("File could not be opened");
}
	else { // read account, name and balance from file
		unsigned int account; // account number
		char name[30]; // account name
		double balance; // account balance

		printf("%-10s%-13s%s\n", "Account", "Name", "Balance");
		fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
		
		// while not end of file
		while (!feof(cfPtr)	) {
		printf("%-10d%-13s%7.2f\n", account, name, balance);
		fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
		}

		fclose(cfPtr); // fclose closes the file
	}
}
