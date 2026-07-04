#include <stdio.h>

struct Struct {
    int sayi;
    char harf;
};

union Union {
    int sayi;
    char harf;
};

int main() {
    struct Struct s;
    union Union u;

    s.sayi = 65;
    s.harf = 'A';

    u.sayi = 65;
    u.harf = 'A';

    printf("STRUCT:\n");
    printf("sayi = %d\n", s.sayi);
    printf("harf = %c\n", s.harf);

    printf("\nUNION:\n");
    printf("sayi = %d\n", u.sayi);
    printf("harf = %c\n", u.harf);

    return 0;
}