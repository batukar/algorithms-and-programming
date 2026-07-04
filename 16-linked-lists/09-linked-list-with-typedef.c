#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int data;
    struct Node* next;
} Node;

Node* newNode(int newData);
void inputHead(Node** head, int newData);
void inputTail(Node** head, int newData);
void inputBetween(Node** head, int newData);
void displayList(const Node* head);
int menu();


int main() {
    Node* head = NULL;

    for (;;) {
        int m = menu();
        switch (m) {
            case 1: {
                int x;
                printf("Eklenecek veri: ");
                scanf("%d", &x);
                inputHead(&head, x);
                break;
            }
            case 2: {
                int x;
                printf("Eklenecek veri: ");
                scanf("%d", &x);
                inputTail(&head, x);
                break;
            }
            case 3: {
                int x;
                printf("Eklenecek veri: ");
                scanf("%d", &x);
                inputBetween(&head, x);
                break;
            }
            case 4:
                displayList(head);
                break;
            case 5:
                printf("Cikis yapildi...\n");
                return 0;
            default:
                printf("Gecersiz secim.\n");
        }
    }
}


Node* newNode(int newData) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = newData;
    node->next = NULL;
    return node;
}

void inputHead(Node** head, int newData) {
    Node* n = newNode(newData);
    n->next = *head;
    *head = n;
}

void inputTail(Node** head, int newData) {
    Node* n = newNode(newData);

    if (*head == NULL) {
        *head = n;
        return;
    }

    Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = n;
}

void inputBetween(Node** head, int newData) {
    int index = 0;
    printf("Hangi indeksten sonra eklensin? ");
    scanf("%d", &index);

    if (index < 0) {
        inputHead(head, newData);
        return;
    }

    Node* temp = *head;
    int count = 0;

    while (temp != NULL) {
        if (count == index) {
            Node* n = newNode(newData);
            n->next = temp->next;
            temp->next = n;
            return;
        }
        count++;
        temp = temp->next;
    }

    inputTail(head, newData);
}

int menu() {
    int choice;
    printf("|~~~~~|~ Menu ~|~~~~~|\n");
    printf("1. Basa Ekle\n");
    printf("2. Sona Ekle\n");
    printf("3. Araya Ekle\n");
    printf("4. Listeyi Goster\n");
    printf("5. Cikis\n");
    printf("Secim yapin: ");
    scanf("%d", &choice);
    return choice;
}

void displayList(const Node* head) {
    printf("\nLinked list: ");
    const Node* temp = head;
    while (temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n\n");
}