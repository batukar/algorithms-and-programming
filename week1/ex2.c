#include <stdio.h>

int topla(int a, int b){
    return a + b;
}

int fark(int ilkSayi, int ikinciSayi){
    if(ilkSayi < ikinciSayi){
        ilkSayi *= 4;
    }
    return ilkSayi - ikinciSayi;
}

void yazdir(int result){
    printf("%d\n", result);
}

int input(){
    int inp = 0;
    printf("Sayi girin: \n");
    scanf("%d", &inp);

    return inp;
}

int faktoriyel(int number){
    int result = 1;
    for (int i = 2; i <= number; i++){
        result *= i;
    }
    
    return result;
}

int faktRekursif(int number){
    return (number <= 1) ? 1 : number * faktRekursif(number - 1);
}


int main(){
    int x = input();
    int y = input();
    


    int sonuc = topla(x, y);
    yazdir(sonuc);

    sonuc = fark(y, x);
    yazdir(sonuc);

    int fakt = input(); // kaça kadar fakt hesaplansin?
    sonuc = faktoriyel(fakt);
    yazdir(sonuc);


    sonuc = faktRekursif(fakt);
    yazdir(sonuc);
}

