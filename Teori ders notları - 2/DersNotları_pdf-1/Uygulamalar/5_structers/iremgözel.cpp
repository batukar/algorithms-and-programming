#include <stdio.h>
#include <string.h>

struct Address{
	
	int phoneNumber;
	char address[100];
	

};

struct User{
	
	int id;
	char name[20];
	char surname[20];
	int password;
	float bakiye;
	char email[50];
	struct Address address;
	
};

int main(){
	struct User u1;
	struct User u2;
	
	u1.id = 1;
	
	strcpy(u1.name, "irem");
	strcpy(u1.surname, "gozel");
	u1.password = 1234;
	u1.bakiye = 1000;
	strcpy(u1.email, "i@g.com");
	u1.address.phoneNumber = 9999;
	strcpy(u1.address.address,"hatay");
	
	printf("ID : %d\n",u1.id);
	printf("Isim : %s %s\n",u1.name,u1.surname);
	printf("email : %s\n",u1.email);
	printf("telefon numarası : %d\n",u1.address.phoneNumber);
	printf("adres : %s\n",u1.address.address);
}
