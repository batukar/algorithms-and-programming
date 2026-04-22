#include <stdio.h>
#include <string.h>

int main(){

    char username[] = "batukar";

    int size = strlen(username);

    printf("%d\n", size);
    printf("%zu\n", strlen(username));


}