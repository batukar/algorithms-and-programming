#include <stdio.h>
#include <stdlib.h>

// Dugum yapisi
struct Node {
    int data;
    struct Node* next;
};

// Basa ekleme
void basaEkle(struct Node** head, int value) {
    struct Node* yeni = (struct Node*)malloc(sizeof(struct Node));

    yeni->data = value;
    yeni->next = *head;

    *head = yeni;
}

// Sona ekleme
void sonaEkle(struct Node** head, int value) {
    struct Node* yeni = (struct Node*)malloc(sizeof(struct Node));

    yeni->data = value;
    yeni->next = NULL;

    // Liste bos ise
    if (*head == NULL) {
        *head = yeni;
        return;
    }

    struct Node* temp = *head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = yeni;
}

// Araya ekleme
// position = hangi indexten sonra eklenecegi
void arayaEkle(struct Node** head, int value, int position) {
    struct Node* yeni = (struct Node*)malloc(sizeof(struct Node));

    yeni->data = value;

    struct Node* temp = *head;

    for (int i = 0; i < position; i++) {
        if (temp == NULL) {
            return;
        }
        temp = temp->next;
    }

    yeni->next = temp->next;
    temp->next = yeni;
}

// Listeyi yazdirma
void listeYazdir(struct Node* head) {
    struct Node* temp = head;

    while (temp != NULL) {
        printf("%d", temp->data);

        if (temp->next != NULL) {
            printf(" -> ");
        }

        temp = temp->next;
    }

    printf("\n");
}

int main() {

    struct Node* head = NULL;

    // Dogum yili: 1995

    basaEkle(&head, 9);
    basaEkle(&head, 9);
    sonaEkle(&head, 5);
    basaEkle(&head, 1);

    printf("Bagli Liste:\n");
    listeYazdir(head);

    return 0;
}