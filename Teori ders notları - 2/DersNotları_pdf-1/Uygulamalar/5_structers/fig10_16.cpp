// Fig. 10.16: fig10_16.c
// Representing cards with bit fields in a struct
#include <stdio.h>
#define CARDS 52

// bitCard structure definition with bit fields
struct bitCard {
	unsigned int face : 4; // 4 bits; 0-15
	unsigned int suit : 2; // 2 bits; 0-3
	unsigned int color : 1; // 1 bit; 0-1
};

typedef struct bitCard Card; // new type name for struct bitCard

void fillDeck(Card * const wDeck); // prototype
void deal(const Card * const wDeck); // prototype

int main(void)
{
	Card deck[CARDS]; // create array of Cards

	fillDeck(deck);

	puts("Card values 0-12 correspond to Ace through King");
	puts("Suit values 0-3 correspond Hearts, Diamonds, Clubs and Spades");
	puts("Color values 0-1 correspond to red and black\n");
	deal(deck);
}

// initialize Cards
void fillDeck(Card * const wDeck)
{
	// loop through wDeck
	for (size_t i = 0; i < CARDS; ++i) {
	wDeck[i].face = i % (CARDS / 4);
	wDeck[i].suit = i / (CARDS / 4);
	wDeck[i].color = i / (CARDS / 2);
	}
}

// output cards in two-column format; cards 0-25 indexed with
// k1 (column 1); cards 26-51 indexed with k2 (column 2)
void deal(const Card * const wDeck)
{
	printf("%-6s%-6s%-15s%-6s%-6s%s\n", "Card", "Suit", "Color",
		"Card", "Suit", "Color");

	// loop through wDeck
	for (size_t k1 = 0, k2 = k1 + 26; k1 < CARDS / 2; ++k1, ++k2) {
		printf("Card:%3d Suit:%2d Color:%2d ",
			wDeck[k1].face, wDeck[k1].suit, wDeck[k1].color);
		printf("Card:%3d Suit:%2d Color:%2d\n",
			wDeck[k2].face, wDeck[k2].suit, wDeck[k2].color);
		}
}
