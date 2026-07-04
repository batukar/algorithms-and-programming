// fig06_10.c
 // Karakter dizilerinin öteki adý dizgidir (dize)
 #include <stdio.h>
 #define SIZE 20
//Programý baþlatan fonksiyon
 int main(void) {
 char string1[SIZE] = ""; // reserves 20 characters
 char string2[] = "Dize sabiti"; // reserves 15 characters

 //kullanýcýdan dize isteyen sonra onu okuyan yer
 printf("%s", "Dizeyi giriniz : (19 karakterden buyuk olmasin): ");
 scanf("%19s", string1); // input no more than 19 characters

 // dizenin çýktýsý
 printf("string1 is: %s\nstring2 is: %s\n", string1, string2);
 puts("string1 dizesinin karakterleri arasi bosluk :");

 // döngü '\0' a ulaþana kadar karakteri basmaya devam eder
 for (size_t i = 0; i < SIZE && string1[i] != '\0'; ++i) {
 printf("%c ", string1[i]);
 }
 //puts(""); 
 }
