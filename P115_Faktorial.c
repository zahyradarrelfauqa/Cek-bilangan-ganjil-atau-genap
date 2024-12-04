#include <stdio.h>

int main() {
    int n;

    printf("Masukkan jumlah angka: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int num, fact = 1;
        printf("Masukkan angka ke-%d: ", i);
        scanf("%d", &num);

        int j = 1;
        while (j <= num) {
            fact *= j;
            j++;
        }

        printf("Faktorial dari %d adalah %d\n", num, fact);
    }
    return 0;
}

