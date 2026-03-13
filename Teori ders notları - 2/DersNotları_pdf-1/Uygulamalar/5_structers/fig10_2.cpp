// Fig. 10.2: fig10_02.c
// Structure member operator and
// structure pointer operator
#include <stdio.h>

// card structure definition
struct card {
	char *face; // define pointer face
	char *suit; // define pointer suit
};

int main(void)
{
	struct card aCard; // define one struct card variable

	// place strings into aCard
	aCard.face = "ACE";
	aCard.suit = "SPICE";

	struct card *cardPtr = &aCard; // assign address of aCard to cardPtr

	printf("%s  %s", aCard.face, aCard.suit);
}
