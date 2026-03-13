#include <stdio.h>

union Data {
    int i;
    float f;
    char ch;
};

void yazdir(union Data *data);

int main() {
    union Data d;

    d.i = 65;
    printf("d.i = 65 atandiktan sonra:\n");
    yazdir(&d);

    d.f = 12.5;
    printf("\nd.f = 12.5 atandiktan sonra:\n");
    yazdir(&d);

    d.ch = 'A';
    printf("\nd.ch = 'A' atandiktan sonra:\n");
    yazdir(&d);

    return 0;
}

void yazdir(union Data *data) {
    printf("int deger   : %d\n", data->i);
    printf("float deger : %.2f\n", data->f);
    printf("char deger  : %c\n", data->ch);
}