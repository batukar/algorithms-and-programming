// Fig. 10.2: fig10_02.c
// Structure member operator and
// structure pointer operator
#include <stdio.h>

// card structure definition
struct otomobil {
	char *marka; // define pointer face
	char *model; // define pointer suit
	int uretimYili;
    float kiralamaUcreti;
};

int main(void)
{
	struct otomobil Otomobil; // define one struct card variable

	// place strings into aCard
	Otomobil.marka = "BYD";
	Otomobil.model = "SEAL";
	Otomobil.uretimYili = 2024;
	Otomobil.kiralamaUcreti = 500;
	//struct card *cardPtr = &aCard; // assign address of aCard to cardPtr

	printf("%s  %s   %d   %.2f", Otomobil.marka, Otomobil.model, Otomobil.uretimYili, Otomobil.kiralamaUcreti);
}
