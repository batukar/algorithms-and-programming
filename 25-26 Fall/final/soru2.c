#include <stdio.h>

int main(void) {
    int c;
    long int a=0, e=0, o=0, u=0;
    long int total = 0;

    printf("Paragrafi girin: \n");
    printf("Windows -> bitirmek icin EOF: Ctrl+Z+Enter / Ctrl+D:\n");
    printf("Mac -> bitirmek icin EOF: control+Z+Enter / control+D):\n");


    while ((c = getchar()) != EOF) {
        total++;

        if (c == 'a' || c == 'A') a++;
        else if (c == 'e' || c == 'E') e++;
        else if (c == 'o' || c == 'O') o++;
        else if (c == 'u' || c == 'U') u++;
    }

    long int vowels = a + e + o + u;
    long int others = total - vowels;

    printf("\n~~~ SONUC ~~~\n");
    printf("a sayisi: %li\n", a);
    printf("e sayisi: %li\n", e);
    printf("o sayisi: %li\n", o);
    printf("u sayisi: %li\n", u);
    printf("Diger karakter sayisi: %li\n", others);

    return 0;
}