#include <stdio.h>
#include <stdlib.h>

char filePath[100] = "./ogrenci.txt";

typedef struct{
    int ogrenciNo;
    char ogrenciAdi[20];
    float gano;
} Ogrenci;

// struct Ogrenci{
//     int ogrenciNo;
//     char ogrenciAdi[20];
//     float gano;
// };

int menu();
void dosyaOkuma();
void dosyaYazma();
void dosyaGuncelle();

int main()
{
    while (1)
    {
        int choice = menu();

        switch (choice){
            case 1: dosyaOkuma(); break;
            case 2: dosyaYazma(); break;
            case 3: dosyaGuncelle(); break;
            case 4: exit(1);
            default: printf("HATA: Yanlis secim!\n"); break;
        }
    }
}

int menu(){
    int menu = 0;

    printf("\n~~~Menu~~~\n");
    printf("1. Dosya Okuma\n");
    printf("2. Dosya Yazma\n");
    printf("3. Dosya Guncelleme\n");
    printf("4. Cikis\n");
    printf("Secim yapin: \n");
    scanf("%d", &menu);

    return menu;
}

void dosyaOkuma(){
    FILE *dosya = fopen(filePath, "rb"); // read binary (rb)

    if (dosya == NULL){
        printf("HATA: Dosya bulunamadi!\n");
        return;
    }

    Ogrenci ogr;

    while (fread(&ogr, sizeof(Ogrenci), 1, dosya)){
        printf("Ogrenci No: %d | Ogrenci Adı: %s | Ogrenci GANO: %.2f\n",
               ogr.ogrenciNo, ogr.ogrenciAdi, ogr.gano);
    }

    fclose(dosya);
}

void dosyaYazma(){
    FILE *dosya = fopen(filePath, "wb"); // write binary (wb)

    // if (dosya == NULL){
    //     printf("HATA: Dosya bulunamadi!\n");
    //     return;
    // }

    Ogrenci ogr[3] ={ // 84 bayt
        {101, "batuhan", 1.23}, // 28 bayt
        {202, "osman", 3.4},
        {301, "veli", 2}
    };

    int ogrenciSayisi = sizeof(ogr) / sizeof(ogr[0]);

    for (int i = 0; i < ogrenciSayisi; i++){
        fwrite(&ogr[i], sizeof(Ogrenci), 1, dosya);
    }

    fclose(dosya);
    printf("Dosyaya %d kadar ogrenci kaydedildi.\n", ogrenciSayisi);
}

void dosyaGuncelle(){
    FILE *dosya = fopen(filePath, "r+b"); // read +(write) binary (r+b)

    if (dosya == NULL){
        printf("HATA: Dosya bulunamadi!\n");
        return;
    }

    int arananOgrenciNo;
    printf("Guncellenecek ogrenci no girin: \n");
    scanf("%d", &arananOgrenciNo);

    Ogrenci ogr;
    int bulunan = 0;
    int index = 0;

    while(fread(&ogr, sizeof(Ogrenci), 1, dosya)){
        if(arananOgrenciNo == ogr.ogrenciNo){
            bulunan = 1;
            break;
        }
        index++;
    }

    if(!bulunan){
        printf("HATA: Listede %d numarali ogrenci bulunmamaktadir\n", arananOgrenciNo);
        return;
    }

    printf("Yeni: Ogrenci adi girin: \n");
    scanf("%s", ogr.ogrenciAdi);
    printf("Yeni: Ogrenci GANO girin:\n");
    scanf("%f", &ogr.gano);

    // rastgele erisim
    fseek(dosya, index * sizeof(Ogrenci), SEEK_SET);
    fwrite(&ogr, sizeof(Ogrenci), 1, dosya);

    fclose(dosya);
}