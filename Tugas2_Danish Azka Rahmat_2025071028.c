int hitungTotal(int arr[], int nilai) {
    int total = 0;
    for(int i = 0; i < ; i++) {
        total += arr[i];
    }
    return total;
}
float hitungRataRata(int arr[], int nilai) {
    int total = hitungTotal(arr, nilai);
    return (float) total / nilai;
}
int nilaiTertinggi(int arr[], int nilai) {
    int max = arr[0];
    for(int i = 1; i < nilai; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int data[10];
    int nilai = 10;

    for(int i = 0; i < nilai; i++) {
        printf("masukkan nilai ke %d: ", i + 1);
        scanf("%d", &data[i]);
    }

    printf("Total Penjualan     : %d\n", hitungTotal(data, nilai));
    printf("Rata-rata Penjualan : %.2f\n", hitungRataRata(data, nilai));
    printf("Penjualan Tertinggi : %d\n", nilaiTertinggi(data, nilai));

    return 0;
}