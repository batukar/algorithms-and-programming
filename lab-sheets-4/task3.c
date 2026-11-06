#include <stdio.h>

int main() {
    const long int KAYITLI_ID = 1234567890L;
    const int KAYITLI_SIFRE = 1234;

    long int kullaniciID;
    int sifre;

    printf("Kullanici numaranizi girin: ");
    if (scanf("%ld", &kullaniciID) != 1) {
        printf("Hatali giris!\n");
        return 1;
    }

    if (kullaniciID == KAYITLI_ID) {
        printf("Sifrenizi girin: ");

        if (scanf("%d", &sifre) != 1) {
            printf("Hatali giris!\n");
            return 1;
        }

        if (sifre == KAYITLI_SIFRE) {
            printf("Giris basarili!\n");
            printf("Hos geldin, %ld\n", kullaniciID);
        } else {
            printf("Sifre uyusmamaktadir!\n");
        }
    } else {
        printf("Kullanici ID uyusmamaktadir!\n");
    }

    return 0;
}