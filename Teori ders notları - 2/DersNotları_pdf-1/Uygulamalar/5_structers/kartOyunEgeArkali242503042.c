#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Kart {
    char tip[10];    // kartın tipi (kupa, maça, karo, sinek)
    int deger;       // kartın değeri
};

// oyun yapısı, desteyi ve oyun bilgilerini tutuyor
struct Oyun {
    struct Kart deste[52];  // 52 kartlık deste
    int kartSayisi;         // destedeki kart sayısı
    int toplamPuan;         // toplam puan
};

void kartGoster(struct Kart kart);
void rastgeleKartOlustur(struct Kart *kart);

int main() {
    srand(time(NULL));
    struct Oyun oyun;
    struct  Kart kart;
    oyun.kartSayisi = 0;    // başta destede kart yok
    oyun.toplamPuan = 0;    // başta puan yok

    // 4 tane rastgele kart oluşturuyoruz
    int i = 0;
    for (i = 0; i < 4; i++) {
        rastgeleKartOlustur(&oyun.deste[i]);  // her kart için rastgele değerler atıyoruz
    }
    oyun.kartSayisi = 4;    // 4 kart oluşturduk

    printf("Destedeki kartlar ve puanlar:\n");
    printf("------------------------\n");

    for (i = 0; i < oyun.kartSayisi; i++) {
        printf("Kart %d: ", i + 1);  // kart numarasını yazdırıyoruz
        kartGoster(oyun.deste[i]);   // kartı gösteriyoruz

        // puan hesaplama kuralları
        if (oyun.deste[i].deger == 1) {  // eğer kart as ise
            printf("As! +20 puan\n");
            oyun.toplamPuan += 20;  // as 20 puan değerinde
        } else if (oyun.deste[i].deger == 13) {  // eğer kart papaz ise
            printf("Papaz! +10 puan\n");
            oyun.toplamPuan += 10;  // papaz 10 puan değerinde
        } else {  // normal kartlar için
            printf("Normal kart! +%d puan\n", oyun.deste[i].deger);
            oyun.toplamPuan += oyun.deste[i].deger;  // normal kartlar kendi değerleri kadar puan
        }
        printf("------------------------\n");  // ayraç çizgisi
    }

    // toplam puanı gösteriyoruz
    printf("\nToplam puan: %d\n", oyun.toplamPuan);

    // kazanma durumunu kontrol ediyoruz, ortalama puan 44, üstünde ise kazanıyoruz
    if (oyun.toplamPuan > 44) {
        printf("\nTEBRIKLER! Kazandiniz!\n");
        printf("Puaniniz ortalamanin (44) uzerinde!\n");
    } else {  // 44'ün altında ise kaybediyoruz
        printf("\nUzgunum, kaybettiniz.\n");
        printf("Puaniniz ortalamanin (44) altinda.\n");
    }

    return 0;  // programı bitiriyoruz
}

// kartı ekrana yazdıran fonksiyon
void kartGoster(struct Kart kart) {
    printf("%s %d\n", kart.tip, kart.deger);  // tip ve değeri yan yana yazdırıyoruz
}

// rastgele kart oluşturan fonksiyon
void rastgeleKartOlustur(struct Kart *kart) {
    // kart tiplerini tanımlıyoruz
    const char* tipler[] = {"Kupa", "Maca", "Karo", "Sinek"};

    // rastgele bir tip seçiyoruz
    int tipIndex = rand() % 4;
    strcpy((*kart).tip, tipler[tipIndex]);  // seçilen tipi karta atıyoruz

    // rastgele bir değer seçiyoruz
    (*kart).deger = (rand() % 13) + 1;
}
