#include <stdio.h>

int main(){
    int ay = 0;
    printf("\n1. Ocak\n2. Subat\n3. Mart\n4. Nisan\n5. Mayis\n6. Haziran\n7. Temmuz\n8. Agustos\n9. Eylul\n10. Ekim\n11. Kasim\n12. Aralik\nCikis icin '-1'\n");

    while(1){

        printf("\nAy secin:\n");
        scanf("%d", &ay);

        switch (ay){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                printf("31 gun\n");
                break;
            case 2: 
                printf("28 gun\n");
                break;
            case 4: case 6: case 9: case 11:
                printf("30 gun\n");
                break;
            case -1:
                return 0;
            default:
                printf("HATA: Yanlis secim!\n");
                break;
        }
    }

}