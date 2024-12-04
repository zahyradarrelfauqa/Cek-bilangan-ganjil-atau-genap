#include <stdio.h>

int main() {
    int n;
    printf("Masukkan ukuran tabel modulus: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            printf("%4d", i % j); 
            j++;
        }
        printf("\n"); 
        i++;
    }

    return 0;
}
