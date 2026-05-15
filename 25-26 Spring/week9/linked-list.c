#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int menu();
void showLinkedList(struct Node* head);
struct Node* newNode(int newData);
void inputHead(struct Node** head, int newData);
void inputTail(struct Node** head, int newData);
void inputBetween(struct Node** head, int newData);

int main(){
    struct Node* head = NULL;
    int val = 0;

    for(;;){
        int m = menu();
        switch (m){
            case 1:
                printf("Eklenecek veri girin: \n");
                scanf("%d", &val);
                inputHead(&head, val);
                break;
            case 2:
                printf("Eklenecek veri girin: \n");
                scanf("%d", &val);
                inputTail(&head, val);
                break;
            case 3:
                printf("Eklenecek veri girin: \n");
                scanf("%d", &val);
                inputBetween(&head, val);
                break;
            case 4:
                showLinkedList(head);
                break;
            case 5:
                exit(0);
            default:
                printf("HATA: Yanlis secim yapildi!\n");
        }
    }
}

int menu(){
    int choice = 0;

    printf("\n~~~~ Menu ~~~~\n");
    printf("1. Basa ekle\n");
    printf("2. Sona ekle\n");
    printf("3. Araya ekle\n");
    printf("4. Listeyi goruntule\n");
    printf("5. Cikis\n");
    printf("Secim yapiniz:\n");
    scanf("%d", &choice);

    return choice;
}

void showLinkedList(struct Node* head){
    while(head){
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

struct Node* newNode(int newData){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = newData;
    node->next = NULL;

    return node;
}

void inputHead(struct Node** head, int newData){
    struct Node* n = newNode(newData);

    n->next = *head;
    *head = n;
}

void inputTail(struct Node** head, int newData){
    struct Node* n = newNode(newData);

    if(*head == NULL){
        *head = n;
        return;
    }

    struct Node* temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void inputBetween(struct Node** head, int newData){
    int index = 0;
    printf("Hangi indeksten sonra ekleme yapilsin?\n");
    scanf("%d", &index);

    if(index < 0){
        inputHead(head, newData);
        return;
    }

    int count = 0;
    struct Node* temp = *head;
    while(temp != NULL){
        if(count == index){
            struct Node* n = newNode(newData);
            n->next = temp->next;
            temp->next = n;
            return;
        }
        count++;
        temp = temp->next;
    }
    inputTail(head, newData);


}