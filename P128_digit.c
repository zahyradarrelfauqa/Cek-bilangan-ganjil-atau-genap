#include <stdio.h>

void cetakBilanganGanjil(int n) {
    printf("Bilangan ganjil dari 1 hingga %d:\n", n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) { 
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    cetakBilanganGanjil(n);

    return 0;
}

