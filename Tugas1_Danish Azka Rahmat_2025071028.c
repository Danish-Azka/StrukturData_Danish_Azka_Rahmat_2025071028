LOOPING 1-10
#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    return 0;
}

LOOPING BILANGAN GENAP
#include <stdio.h>

int main() {
    int i;
    for (i = 2; i <= 50; i += 2) {
        printf("%d ", i);
    }
    return 0;
}

KASUS PERHITUNGAN
#include <stdio.h>

int main() {
    int N, i, jumlah = 0;

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        jumlah += i;
    }

    printf("Jumlah bilangan dari 1 sampai %d adalah %d\n", N, jumlah);
    return 0;
}

MENGHITUNG RATA-RATA DAN TOTAL NILAI
#include <stdio.h>

int main() {
    int nilai[5];
    int i, total = 0;
    float rata_rata;

    for (i = 0; i < 5; i++) {
        printf("masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
        total += nilai[i];
    }

    rata_rata = total / 5.0;

    printf("total nilai = %d\n", total);
    printf("rata-rata = %.2f\n", rata_rata);

    return 0;
}

