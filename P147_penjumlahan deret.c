#include <stdio.h>

int jumlah_deret(int n) {
    if (n == 0)
        return 0;
    return n + jumlah_deret(n - 1);
}

int main() {
    int n;
    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    printf("Jumlah deret 1 hingga %d adalah %d\n", n, jumlah_deret(n));
    return 0;
}

