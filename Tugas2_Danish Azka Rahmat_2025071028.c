#include <stdio.h>

int hitungTotal(int arr[], int size) {
    int total = 0;
    for(int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}
float hitungRataRata(int arr[], int size) {
    int total = hitungTotal(arr, size);
    return (float) total / size;
}
int nilaiTertinggi(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int data[10];
    int size = 10;

    for(int i = 0; i < size; i++) {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &data[i]);
    }

    printf("Total Penjualan     : %d\n", hitungTotal(data, size));
    printf("Rata-rata Penjualan : %.2f\n", hitungRataRata(data, size));
    printf("Penjualan Tertinggi : %d\n", nilaiTertinggi(data, size));

    return 0;
}