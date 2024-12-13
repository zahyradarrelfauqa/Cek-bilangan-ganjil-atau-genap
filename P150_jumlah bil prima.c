#include <stdio.h>

int cek_prima(int n, int i) {
    if (n <= 1)
        return 0;
    if (i == 1)
        return 1;
    if (n % i == 0)
        return 0;
    return cek_prima(n, i - 1);
}

int jumlah_prima(int n) {
    if (n <= 0)
        return 0;
    if (cek_prima(n, n - 1))
        return n + jumlah_prima(n - 1);
    return jumlah_prima(n - 1);
}

int main() {
    int n;
    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    printf("Jumlah bilangan prima dari 1 hingga %d adalah %d\n", n, jumlah_prima(n));
    return 0;
}

