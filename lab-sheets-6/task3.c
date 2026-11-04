#include <stdio.h>

int main() {
    int i = 0;

    // HATALI KOD
    /* 
    while (i < 10) {
        if (i == 3) continue; 

        printf("%d ", i);
        i++;
    }
    */

    while (i < 10) {
        i++;

        if (i == 3) continue;
        
        printf("%d ", i);
    }

    return 0;
}