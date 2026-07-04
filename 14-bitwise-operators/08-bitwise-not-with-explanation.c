#include <stdio.h>

int main(){
    int x = 5; // 0000 0101

    printf("NOT islemi sonucu: %d\n", ~x);
}

// 0000 0101
// 1111 1010 -> bitlerin tersini aldım, sonuç bu

// 1111 1010 -> bunun degerini bulmak içinse:
// tekrar tersini alıyoruz:

// 0000 0101 -> ve buna +1 ekliyoruz:
//        +1
// 0000 0110 -> 6 oluyor.
// degerini bulmak istediğimiz byte ın 7. biti (işaret biti) 1 di. bu sebeple başına eksi koyuyoruz: -6




