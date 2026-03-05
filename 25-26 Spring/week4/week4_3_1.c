#include <stdio.h>

int num = 5;

void menu();
void secim();
void arttir(int *ptr);
void temizle(int *ptr);

int main(){
    while (1){
        menu();
    }
}

void arttir(int *ptr){
    (*ptr)++;
    printf("num = %d\n", num);
}

void temizle(int *ptr){
    *ptr = 0;
    printf("num = %d\n", num);
}

void menu(){
    printf("1- Tıkla!\n");
    printf("2- Temizle!\n");
    secim();
}

void secim(){
    int choice = 0;
    scanf("%d", &choice);

    switch (choice){
        case 1:
            arttir(&num);
            break;
        case 2:
            temizle(&num);
            break;
        default:
            printf("Yanlis secim!\n");
            break;
    }
}