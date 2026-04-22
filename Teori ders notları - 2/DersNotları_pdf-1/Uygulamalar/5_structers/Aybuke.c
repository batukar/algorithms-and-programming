#include <stdio.h>
#include <string.h>

#define MAX_OTOMOBIL 100

struct Otomobil {
    char marka[50];
    char model[50];
    int uretimYili;
    float kiralamaUcreti;
};

int main() {
    struct Otomobil otomobiller[MAX_OTOMOBIL];
    int otomobilSayisi, i;
    char arananMarka[50];
    float toplamKiralamaUcreti = 0.0;

    printf("Kac otomobil gireceksiniz? ");
    scanf("%d", &otomobilSayisi);
    getchar();

    for (i = 0; i < otomobilSayisi; i++) {
        printf("Otomobil %d bilgilerini girin:\n", i + 1);
        printf("Marka: ");
        fgets(otomobiller[i].marka, sizeof(otomobiller[i].marka), stdin);
        otomobiller[i].marka[strcspn(otomobiller[i].marka, "\n")] = 0;

        printf("Model: ");
        fgets(otomobiller[i].model, sizeof(otomobiller[i].model), stdin);
        otomobiller[i].model[strcspn(otomobiller[i].model, "\n")] = 0;

        printf("Uretim Yili: ");
        scanf("%d", &otomobiller[i].uretimYili);
        printf("Kiralama Ücreti: ");
        scanf("%f", &otomobiller[i].kiralamaUcreti);
        getchar();


        toplamKiralamaUcreti += otomobiller[i].kiralamaUcreti;
    }


    printf("Aramak istediginiz otomobil markasini girin: ");
    fgets(arananMarka, sizeof(arananMarka), stdin);
    arananMarka[strcspn(arananMarka, "\n")] = 0;


    printf("\n%s markasina ait otomobiller:\n", arananMarka);
    for (i = 0; i < otomobilSayisi; i++) {
        if (strcmp(otomobiller[i].marka, arananMarka) == 0) {
            printf("Model: %s, Uretim Yili: %d, Kiralama Ucreti: %.2f\n",
                   otomobiller[i].model, otomobiller[i].uretimYili, otomobiller[i].kiralamaUcreti);
        }
        }
    float ortalamaKiralamaUcreti = toplamKiralamaUcreti / otomobilSayisi;
    printf("\nTüm otomobillerin ortalama kira Ucreti:");
}
