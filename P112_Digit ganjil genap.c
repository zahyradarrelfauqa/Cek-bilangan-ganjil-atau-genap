#include <stdio.h>

int main() {
    int n, count = 1;

    printf("Masukkan jumlah angka: ");
    scanf("%d", &n);

    while (count <= n) {
        int num, evenCount = 0, oddCount = 0;

        printf("Masukkan angka ke-%d: ", count);
        scanf("%d", &num);

        while (num != 0) {
            int digit = num % 10;
            if (digit % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
            num /= 10;
        }

        printf("Jumlah digit genap: %d\n", evenCount);
        printf("Jumlah digit ganjil: %d\n", oddCount);
        count++;
    }
    return 0;
}

