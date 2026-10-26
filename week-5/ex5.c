#include <stdio.h>

int main(){
    long int kullaniciID = 1234567890;
    int pass = 1234;

    long int inputID = 0;
    int inputPass = 0;

    int attempt = 3;

    do{
        attempt--;
        printf("Kullanici ID girin: \n");
        scanf("%li", &inputID);

        if(inputID == kullaniciID){
            printf("Sifre girin: \n");
            scanf("%d", &inputPass);
            if(inputPass == pass){
                printf("BASARILI: Hos geldin, %li\n", kullaniciID);
                break;
            }else{
                printf("HATA: Sifreler uyusmamaktadir\n");
                printf("Kalan hakkiniz: %d\n", attempt);
                continue;
            }
        }else{
            printf("HATA: ID ler uyusmamaktadir\n");
            printf("Kalan hakkiniz: %d\n", attempt);
            continue;
        }
    } while (attempt > 0);
        
}