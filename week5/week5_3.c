#include <stdio.h>
#include <string.h>

#define SIZE 10

char username[SIZE] = "batukar";
char password[SIZE] = "12345678";

int main(){
    char inputUsername[SIZE];
    char inputPassword[SIZE];

    while(1){
    printf("Kullanici adiniz: ");
    gets(inputUsername);
        if(!strcmp(inputUsername, username)){
                while(1){
                    printf("Sifre girin: ");
                    gets(inputPassword);
                    if(!strcmp(inputPassword, password)){
                        puts("Hosgeldiniz! ");
                        puts(username);
                        break;
                    }else continue;
                }
                break;
        }else continue;
    }
}