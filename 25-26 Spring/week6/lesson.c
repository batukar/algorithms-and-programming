#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

struct Student{
    int studentID;
    char studentName[20];
    char lectureName[20];
};

void studentInsert(struct Student students[], int *count);
void studentsShow(struct Student students[], int count);
void menu();

int main(){
    struct Student students[SIZE] = {0};
    int choice = 0;
    int count = 0;

    while(1){
        menu();
        scanf("%d", &choice);

        switch (choice){
            case 1:
                if(count >= SIZE){
                    printf("Liste dolu!\n");
                }else studentInsert(students, &count);
                break;
            case 2:
                if(count == 0){
                    printf("Liste bos!\n");
                }else{
                    studentsShow(students, count);
                }
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("Yanlis secim!\n");
                break;
            }
    }
}

void menu(){
    printf("\n~~~Ogrenci Menu~~~\n");
    printf("1. Ogrenci ekle\n");
    printf("2. Ogrenci bilgilerini getir\n");
    printf("3. Cikis\n");
    printf("Secim yapiniz:\n");
}

void studentInsert(struct Student students[], int *count){
    printf("Ogrenci numarasi girin:\n");
    scanf("%d", &students[*count].studentID);

    printf("Ogrenci adi girin:\n");
    scanf("%s", students[*count].studentName);

    printf("Ders adi girin:\n");
    scanf("%s", students[*count].lectureName);

    (*count)++;
}

void studentsShow(struct Student students[], int count){
    int id = 0;

    printf("Aranacak ogrenci numarasi girin:\n");
    scanf("%d", &id);

    for (int i = 0; i < count; i++){
        if(id == students[i].studentID){
            printf("Ogrencinin adi: %s\n", students[i].studentName);
            printf("Kayitli dersi: %s\n", students[i].lectureName);
            return;
        }
    }
    
    printf("%d numarasina ait ogrenci bulunamadi!", id);
}