// sorunu çözmek için yapılan düzeltmeler:

// 1. elemanEkle adlı fonksiyonda:

//     - 
//     - array adlı dizinin ilk elemanını döngünün üstünde tanımladık. bu sayede altındaki döngü 1 kere daha az döndü.
//     - num adlı değişkende kullanıcının girdiği değer saklandı.
//     - hatalı dosyada if ile koşul kontrolü yapıyorduk. Bunu bir döngü içine aldık. Amaç ise; 
//     dizide daha önce var olan eleman(ların)ın tekrar eklenmemesi adına, doğru eleman girişi olana kadar kullanıcıyı zorlamak

// 2. kontrol adlı fonksiyonda:

//     - SIZE kadar içerisinde her i. indis ile aranan değer var mı kontrolü sağlanıyor.
//     - Eğer eleman var ise 1 değerini dönderiyor
//     - döngüden çıkınca, tüm elemanlar taranınca, 0 değeri dönderiyor.

// 3. elemanEkle adlı fonksiyonda:

//     - kontrol adlı fonksiyondan 1 değeri dönerse while(1) olduğu için, doğru değer girilene kadar kullanıcıdan
//     girdi yapması isteniyor
//     - doğru değer girildiğinde döngüden çıkılır ve num değişkeninde saklanan değer array dizinin i. elemanına aktarılır
//     - bu sayede tekrarlayan elemandan kaçınılır.

// NOT: anlaşılmayan durumda bana sorabilirsiniz. 2. hafta yapılacak derste tekrar üzerinde duracağım. 


#include <stdio.h>

#define SIZE 5

int input();
void elemanEkle(int array[]);
int kontrol(int arr[], int aranan);
void yazdir(int arr[]);

int main(){
    int dizi[SIZE];
    elemanEkle(dizi);

    yazdir(dizi);
    
    return 0;
}

int input(){
    int num;
    printf("Sayi girin: \n");
    scanf("%d", &num);

    return num;
}

void elemanEkle(int array[]){
    int num = 0;
    array[0] = input();
    for (int i = 1; i < SIZE; i++){
        num = input();

        while(kontrol(array, num)){
            printf("Yeniden - ");
            num = input();
        }

        array[i] = num;
    }
}

// doğrusal arama
int kontrol(int arr[], int aranan){
    for (int i = 0; i < SIZE; i++){
        if(aranan == arr[i]){
            return 1;
        }
    }

    return 0;
}

void yazdir(int arr[]){
    for (int i = 0; i < SIZE; i++){
        printf("dizi[%d] = %d\n", i, arr[i]);
    }
    printf("\n");
}