#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void insertAwal(struct Node **head, int nilai){
    struct Node *nodeBaru = malloc(sizeof(struct Node));
    nodeBaru->data = nilai;
    nodeBaru->next = *head;
    *head = nodeBaru;
}
void insertAkhir(struct Node **head, int nilai){
    struct Node *nodeBaru = malloc(sizeof(struct Node));
    nodeBaru->data = nilai;
    nodeBaru->next = NULL;

    if(*head == NULL){
        *head = nodeBaru;
        return;
    }

    struct Node *temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = nodeBaru;
}
void tampilList(struct Node *head){
    struct Node *temp = head;
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void hapusNode(struct Node **head, int nilai){
    struct Node *temp = *head;
    struct Node *prev = NULL;

    if(temp != NULL && temp->data == nilai){
        *head = temp->next;
        free(temp);
        return;
    }

    while(temp != NULL && temp->data != nilai){
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL){
        printf("Nilai tidak ditemukan\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

int main(){
    struct Node *head = NULL;

    //5 node
    insertAwal(&head, 50);
    insertAwal(&head, 40);
    insertAwal(&head, 30);
    insertAwal(&head, 20);
    insertAwal(&head, 10);

    tampilList(head);
    
    // tambah di awal
    insertAwal(&head, 5);
    tampilList(head);
    // tambah di akhir
    insertAkhir(&head, 60);
    tampilList(head);
    // hapus berdasarkan nilai
    hapusNode(&head, 30);
    tampilList(head);

    return 0;
}