// Ali haydarın çözümü

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int aynisiVar, yeniSayi;
    int dizi[5];
    int i, j;

    printf("benzersiz bir sayi gir : \n");

    for (i = 0; i < 5; i++)
    {
        printf("%d. sayiyi giriniz : \n", i + 1);
        scanf("%d", &yeniSayi);

        aynisiVar = false;

        for (j = 0; j < i; j++)
        {
            if (dizi[j] == yeniSayi)
            {
                aynisiVar = true;
            }
        }
        if (aynisiVar)
        {
            printf("hata! %d. sayi girilmis yeniden deneyiniz ", aynisiVar);

            i--;
        }
        else
        {
            dizi[i] = yeniSayi;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("dizi[%d] = %d\n", i, dizi[i]);
    }
    
}