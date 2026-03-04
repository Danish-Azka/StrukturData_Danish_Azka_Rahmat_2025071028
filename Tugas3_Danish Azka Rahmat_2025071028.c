#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void tambahData() {
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    printf("Masukkan data: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("Data berhasil ditambahkan\n");
}

void hapusData() {
    int key;
    printf("Masukkan data yang ingin dihapus: ");
    scanf("%d", &key);

    struct Node *temp = head, *prev = NULL;

    if (temp != NULL && temp->data == key) {
        head = temp->next;
        free(temp);
        printf("Data berhasil dihapus\n");
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Data tidak ditemukan\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Data berhasil dihapus\n");
}

void tampilData() {
    struct Node *temp = head;
    if (temp == NULL) {
        printf("Linked list kosong\n");
        return;
    }
    printf("Isi linked list: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int pilihan;
    do {
        printf("\nMenu:\n");
        printf("1. Tambah Data\n");
        printf("2. Hapus Data\n");
        printf("3. Tampil Data\n");
        printf("4. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1: tambahData(); break;
            case 2: hapusData(); break;
            case 3: tampilData(); break;
            case 4: printf("Program selesai\n"); break;
            default: printf("Pilihan tidak valid\n");
        }
    } while (pilihan != 4);

    return 0;
}