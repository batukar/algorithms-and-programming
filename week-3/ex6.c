#include <stdio.h>

// 91 - 100 AA
// 81 - 90 BA
// 71 - 80 BB
// 61 - 70 CB
// 51 - 60 CC
// -50 FF

int main(){
    int vize = 0;
    int final = 0;
    int ort = 0;

    printf("Vize notu girin: \n");
    scanf("%d", &vize);

    printf("Final notu girin: \n");
    scanf("%d", &final);

    if(vize < 0 || vize > 100 || final < 0 || final > 100){
        printf("HATA: yanlis giris!\n");
    }else{
        ort = (vize * 0.4) + (final * 0.6);

        if(ort >= 91){
            printf("Harf notu: AA\n");
        }else if(ort >= 81){
            printf("Harf notu: BA\n");
        }else if(ort >= 71){
            printf("Harf notu: BB\n");
        }else if(ort >= 61){
            printf("Harf notu: CB\n");
        }else if(ort >= 51){
            printf("Harf notu: CC\n");
        }else{
            printf("Harf notu: FF\n");
        }
    }

    return 0;
}