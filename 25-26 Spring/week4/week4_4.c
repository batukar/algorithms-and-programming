#include <stdio.h>
#include <string.h>

int main(){
    char msg[] = "Merhaba!";
    printf("%s\n", msg);

    printf("%zu\n", strlen(msg));

    for (int i = 0; msg[i] != '\0'; i++){
        printf("%c ", msg[i]);
    }

    for (int i = 0; i < strlen(msg); i++){
        printf("%c ", msg[i]);
    }
    
    
}
