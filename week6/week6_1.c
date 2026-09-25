#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[20];
    float grade;
};

int main() {
    struct Student s1;

    s1.id = 101;
    strcpy(s1.name, "Batuhan");
    s1.grade = 88.5;

    printf("Ogrenci No   : %d\n", s1.id);
    printf("Ogrenci Adi  : %s\n", s1.name);
    printf("Notu         : %.2f\n", s1.grade);

    return 0;
}