// Fig. 6.11: fig06_11.c
// Eðer özel olarak belirtilmediyse Statik diziler 0 olarak baþlatýlýr.
#include <stdio.h>

void staticArrayInit(void); // function prototype
void automaticArrayInit(void); // function prototype

// function main begins program execution
int main(void)
{
	puts("Her fonksiyonun ilk cagrilisi:");
	staticArrayInit();
	automaticArrayInit();

	puts("\n\n Her fonksiyonun ikinci cagrilisi:");
	staticArrayInit();
	automaticArrayInit();
	
}

// Statik yerel diziyi gösteren fonksiyon 
//(function to demonstrate a static local array)
void staticArrayInit(void)
{
	// Fonksiyon çagrilmadan once elemanlarini 0 ile baþlatýr. 3 birimlik yer ayirir. 
	//(initializes elements to 0 before the function is called)
	static int array1[3]= {1, 2, 3};

	puts("\n staticArrayInit fonksiyonuna deger girilmesi:");

	// dizi1 içeriðinin yazdýrýlmasý (output contents of array1)
	for (size_t i = 0; i <= 2; ++i) {
		printf("array1[%u] = %d ", i, array1[i]);
	}

	puts("\n staticArrayInit fonksiyonunda olan deðerler:");

	// dizi1 içeriðinin düzenlenmesi ve ciktisi (modify and output contents of array1)
	for (size_t i = 0; i <= 2; ++i) {
		printf("array1[%u] = %d ", i, array1[i] += 5);
	}
}

// Otomatiik yerel dizinin gösterimi (function to demonstrate an automatic local array)
void automaticArrayInit(void)
{
	// Fonksiyon her çaðrýldýðýnda bu deðerlerle baþlatýr 
	//(initializes elements each time function is called)
	int array2[3] = {1, 2, 3};

	puts("\n\n automaticArrayInit fonksiyonuna girilen degerler:");

	// dizi2 nin içeriði (output contents of array2)
	for (size_t i = 0; i <= 2; ++i) {
		printf("array2[%u] = %d ", i, array2[i]);
}

	puts("\n automaticArrayInit fonksiyonundaki degerler:");

	// dizi2 içeriðinin düzenlenmesi ve çýktýsý 
	//(modify and output contents of array2)
	for (size_t i = 0; i <= 2; ++i) {
		printf("array2[%u] = %d ", i, array2[i] += 5);
	}
}







