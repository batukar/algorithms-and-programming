
	//G�R�LEN SAYININ BASAMAK SAYISINI BULAN PROGRAM
	
	
	
#include <stdio.h>
int main(void) 
{	
	  int sayi=0;
	  int sayac=1;
	  printf("Bir sayi giriniz-->");
	  scanf("%d",&sayi);
		do
		{
			if(sayi<=9)
			break;
			else 
			{
			sayi=sayi/10;
			sayac++;
			}
		}while(sayi>=9);
	 	printf("Girdiginiz sayi %d basamaklidir",sayac);
}



//soru-12 Klavyeden girilen 10 adet say�dan �ift say�lar�n toplam�n�n 
//tek say�lar�n toplam�na oran�n� bulan.

#include <stdio.h>
int main(void) 
{
	int sayi,i;
	double cift=0,tek=0;
	printf("10 ADET SAY� G�R�N�Z\n");
	for( i=1;i<=10;i++)
	{
		printf("%d. sayiyi giriniz \n",i);
		scanf("%d",&sayi);
		if(sayi%2==0)
		cift+=sayi;
		else
		tek+=sayi;
	}
	double oran=cift/tek;
	printf("Cift sayilarin tek sayilara oran� %.2f dir",oran);
}


// Fibonacci serisinin ilk 10 terimini
#include <stdio.h>

int main(void) 
{
	long long int sayi1=0,sayi2=1,sayi,i;
	printf("1.Fibbonacci sayisi %d\n",sayi1);
	printf("2.Fibbonacci sayiysi %d\n",sayi2);
	for(i=3;i<=10;i++)
	{
		sayi=sayi1+sayi2;
		printf("%llu\t",sayi);
		sayi1=sayi2;
		sayi2=sayi;
	}
}



//ax2 + bx +c = 0 tipindeki bir denklemin k�klerini bul
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) 
{
int a,b,c,x1,delta,x2;
printf("a b ve c degerlerini gir\n");
scanf("%d%d%d",&a,&b,&c);

delta=(b*b)-4*a*c;

if(delta<0)
printf("Reel koku yok ");

else
	{
	x1=(-b-(pow(delta,0.5)))/2*a;
	x2=(-b+(pow(delta,0.5)))/2*a;
	printf("1.kok ->%d 2.kok-> %d",x1,x2);
	}
}




// Klavyeden girilen 10 adet say� i�erisinden negatif olanlar�n toplam�n�, 
//�ift say�lar�n �arp�m�n�, 7'ye e�it olanlar�n adetini bulunuz.




#include <stdio.h>
int main(void) 
{
	int sayi=0,neg=0,cift=1,yedi=0,i;
	printf("10 Adet sayi giriniz\n");
	for(i=1;i<=10;i++)
	{
		printf("%d. sayiyi giriniz -->\n",i);
		scanf("%d",&sayi);
			if(sayi<0)
			{
			neg+=sayi;	
			}
		 if (sayi%2==0)
		{
		cift=cift*sayi;
		}
		if(sayi==7) 
		yedi++;
	}
printf("negatiflerin toplami= %d  cifterin carpimi= %d yedi lerin sayisi= %d\n",neg,cift,yedi);
}




// �� i�e for d�ng�s�ne �rnek, x sat�r y s�tun  * i�areti

#include <stdio.h>

int main(void) {
   int x = 0; 
   int y = 0; 

   // prompt user for input
   printf("%s", "iki tamsayi giriniz x ve y :\n");
   scanf("%d%d", &x, &y); // read values for x and y
int i;
   for (i = 1; i <= y; ++i) { // count from 1 to y
int j;
      for (j = 1; j <= x; ++j) { // count from 1 to x
         printf("%s", " 1 "); 
      } 

      puts(""); // begin new line
   } 
} 


// Girilen saniye de�erini saat dakika ve saniye cinsinden yazan program
#include <stdio.h>
main(void)
{
		int x, saat, dk, sn;
		printf ("Saniye de�eri giriniz :");
		scanf("%d", &x);
		saat = x / 3600;
		dk = (x % 3600)/60;
		sn = x- saat*3600-dk*60;
		printf("%d Saat: %d Dakika: %d Saniye ",saat,dk,sn);
		
}




//Dost say�lar; 
// Soru kitap����nda 63 nc�sayfa
// X,Y pozitif olmak �zere, e�er x say�s�n�n �arpanlar� toplam� y say�s�na
//ve ayn� zamanda y say�s�n�n �arpanlar� toplam� x say�s�na e�it ise bu
//say�lar dost say�lard�r. Buna g�re girilen iki say�n�n dost olup
//olmad���n� bulan program�n algoritma ve ak�� diyagram�n� �iziniz.

#include <stdio.h>
//Dost say�lar; 
// Soru kitap����nda 63 nc�sayfa
main(void)
{
int x,y,xcarpan=0,ycarpan=0,i,j;
puts ("x ve y sayilarini sirayla giriniz");
scanf("%d%d",&x,&y);
	for(i=1;i<=x;i++)
		{
		if(x%i==0){
		xcarpan=xcarpan+i;
		}
	}
	for(j=1;j<=y;j++)
	{
		if(y%j==0){
		ycarpan=ycarpan+j;
		}
	}
if(xcarpan==y && ycarpan==x)
	{
	printf("%d ile %d dost sayilardir" ,x,y);	
	}
else
	{
	printf("%d ile %d dost sayi degildir" ,x,y);	
	}
}




// �arp�m tablosu sorusu
#include <stdio.h>
main(void)
{
	int i ,j;
	for(i=1;i<=10;i++)
	{
	printf("\n");
	for(j=1;j<=10;j++)
		{
		printf ("%d * %d = %d \n",i,j,i*j);
		}
	}
}


// C program to print Pascal�s Triangle
// using combinations in O(n^2) time
// and O(1) extra space function
#include <stdio.h>
// Driver code
int main()
{
    int n = 10;
    for (int line = 1; line <= n; line++) {
       for (int space = 1; space <= n - line; space++){
            printf("  ");
	   }
        int coef = 1;
        for (int i = 1; i <= line; i++) {
            printf("%4d", coef);
            coef = coef * (line - i) / i;
        }
        printf("\n");
    }
    return 0;
}



#include <stdio.h>
int main(void) {
printf("%15.1f\n", 333.546372); // prints 333.5
printf("%15.2f\n", 333.546372); // prints 333.55
printf("%15.3f\n", 333.546372); // prints 333.546
printf("%15.4f\n", 333.546372); // prints 333.5464
printf("%15.5f\n", 333.546372); // prints 333.54637
}






#include <stdio.h>
#include <math.h>
int main(void) {
    printf("%s", "ilk tamsayiyi girin ");
    int x = 0;
    scanf("%d", &x);  
    printf("%s", "ikinci tamsayiyi girin: ");
    int y = 0;
  scanf("%d", &y);  

   int i = 1;
   int power = 1;  

   while (i <= y) {  
     power *= x;  
      ++i;    
   }  
   printf("%d\n", power);  
}





#include <stdio.h>
// n elemanl� Fibonacci dizisi
int main()
{
    int i, terim ;
	long long int t1 = 0, t2 = 1, nextTerm;
    printf("Terim sayisini girin: ");
    scanf("%d", &terim);

    printf("Fibonacci Dizisi :\n");

    for (i = 1; i <= terim; ++i)
    {
        printf("%lld  ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}





#include <stdio.h>
int main(void) {
	int x = 1;
	for (x = 1; x <= 50; x++) {
   		if (x % 5 == 0) {
      	printf("%d\n", x);
   		}
   		else {
      	printf("%d\t", x);
   		}
	}
}


#include <stdio.h>
int main(void) {
	int x = 1;
	for (x = 1; x <= 50; ++x) {
  	 	printf("%d", x);
   		if (x % 5 == 0) {
      	puts("");
   		}
   		else {
      	printf("%s", "\t");
   		}
	}
}



#include <stdio.h>
int main(void) {
int x = 0;
	while (++x <= 50) {
   		if (x % 5 == 0) {
      	printf("%d\n", x);
   		}
   		else {
      	printf("%d\t", x);
   		}
	}
}


#include <stdio.h>
int main(void) {
	int x = 1;
	while (x <= 50) {
   		if (x % 5 == 0) {
      	printf("%d\n", x++);
   		}
   		else {
       printf("%d\t", x++);
   		}
	}
}


#include <stdio.h>
int main(void) {

	int x = 1;
	while (x <= 50) {
   printf("%d", x);
      if (x % 5 == 0) {
         puts("");
      }
      else {
         printf("%s", "\t");
      }
	++x;
	}
}







//Girilen 4 basamakl� say�n�n basamaklar�n� yaz� ile yazd�ran program

#include <stdio.h>
#include <stdlib.h>  
 void BirlikCevir(int number);
 void OnlukCevir(int number);


int main()
{


    int number=0,d1,d2,d3,d4;
    while(number !=-1){
        printf("Enter a four digit number:");
        scanf("%d",&number);
        if(number==-1) break;
            d1=number%10; //birler
            d2=(number%100)/10; //onlar
            d3=(number%1000)/100; //yuzler
            d4=number/1000; //binler
        if(d4!=1) BirlikCevir(d4);
          printf(" Bin ");
        if(d3!=1) BirlikCevir(d3);
        if(d3!=0) printf(" Yuz ");
        OnlukCevir(d2);
         printf(" ");
        BirlikCevir(d1);
        printf("\n\n");
    }

    return 0;
}

void BirlikCevir(int number){
    switch(number){
       case 1:printf("Bir");break;
       case 2:printf("Iki");break;
       case 3:printf("Uc");break;
       case 4:printf("Dort");break;
       case 5:printf("Bes");break;
       case 6:printf("Alti");break;
       case 7:printf("Yedi");break;
       case 8:printf("Sekiz");break;
       case 9:printf("Dokuz");break;
    }
}
void OnlukCevir(int number){
    switch(number){
       case 1:printf("On");break;
       case 2:printf("Yirmi");break;
       case 3:printf("Otuz");break;
       case 4:printf("Kirk");break;
       case 5:printf("Elli");break;
       case 6:printf("Altmis");break;
       case 7:printf("Yetmis");break;
       case 8:printf("Seksen");break;
       case 9:printf("Doksan");break;
    }

}

