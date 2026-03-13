#include <stdio.h>
#include <string.h>

struct StructDeneme{
    int x;
    char c;
    char msg[10];
};

union UnionDeneme{
    int x;
    char c;
    char msg[10];
};

int main(){
    struct StructDeneme s;
    union UnionDeneme u;

    s.x = 5;
    s.c = 'a';
    strcpy(s.msg, "slm");    

    printf("Struct:\n");
    printf("%d\n", s.x);
    printf("%c\n", s.c);
    printf("%s\n", s.msg);

    u.x = 5;
    u.c = 'a';
    strcpy(u.msg, "slm");

    printf("\nUnion:\n");
    printf("%d\n", u.x);
    printf("%c\n", u.c);
    printf("%s\n", u.msg);

    return 0;
}