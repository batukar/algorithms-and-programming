#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int input();
int randomNumber();
void menu();

int main(){
    srand(time(0));
    menu();
}

int input(){
    int in = 0;
    printf("Sayi girin: \n");
    scanf("%d", &in);

    return in;
}

int randomNumber(){
    return rand() % 10 + 1;
}

void menu(){
    int a, b = 0;
    a = input();
    b = randomNumber();
    printf("a = %d, b = %d\n", a, b);

    while(1){
        printf("\n****-** MENU **-****");
        printf("\nBir islem seciniz: \n");
        printf("1. Toplama\n");
        printf("2. Cikarma\n");
        printf("3. Carpma\n");
        printf("4. Bolme\n");
        printf("5. Cikis\n");

        int menu = input();

        switch (menu){
        case 1:
            printf("%d + %d = %d", a, b, a + b);
            break;
        case 2:
            printf("%d - %d = %d", a, b, a - b);
            break;
        case 3:
            printf("%d * %d = %d", a, b, a * b);
            break;
        case 4:
            printf("%d / %d = %d", a, b, a / b);
            break;
        case 5:
            printf("Program sonlaniyor...\n");
            exit(0);
        default:
            printf("Gecersiz secim yapildi\nTekrar deneyin!\n");
            continue;
        }
    }

}