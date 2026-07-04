// Fig. 11.2: fig11_02.c
// Creating a sequential file
#include <stdio.h>

int main(void)
{
	FILE *cfPtr; // cfPtr = clients.txt file pointer

	//fopen opens file. Exit program if unable to create file
	if ((cfPtr = fopen("simgeplatin.txt", "w")) == NULL) {
		puts("File could not be opened");
	}
	else {
		puts("Enter the account, name, and balance.");
		puts("Enter EOF to end input.");
		printf("%s", "? ");

		unsigned int account; // account number
		char name[30]; // account name
		double balance; // account balance

		scanf("%d%29s%lf", &account, name, &balance);

		// write account, name and balance into file with fprintf
		while (!feof(stdin) ) {
		fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
		printf("%s", "? ");
		scanf("%d%29s%lf", &account, name, &balance);
		}

		fclose(cfPtr); // fclose closes file
	}
}
