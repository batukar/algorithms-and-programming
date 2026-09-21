#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ogrenci {
    int no;
    char ad[30];
    float ortalama;
};

int main() {
    struct Ogrenci *o = (struct Ogrenci*)malloc(sizeof(struct Ogrenci));

    if (o == NULL) {
        printf("Bellek ayrilamadi!\n");
        return 1;
    }

    o->no = 101;
    strcpy(o->ad, "Ayse");
    o->ortalama = 85.5;

    printf("No: %d\n", o->no);
    printf("Ad: %s\n", o->ad);
    printf("Ortalama: %.1f\n", o->ortalama);
    printf("Bir Ogrenci icin ayrilan yer: %lu byte\n", sizeof(struct Ogrenci));

    free(o);

    return 0;
}
