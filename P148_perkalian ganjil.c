#include <stdio.h>

int perkalian_ganjil(int n) {
    if (n <= 0) 
        return 1;
    if (n % 2 == 1)  
        return n * perkalian_ganjil(n - 1);
    return perkalian_ganjil(n - 1);  
}

int main() {
    int n;
    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Tidak ada bilangan ganjil untuk dihitung.\n");
    } else {
        int hasil = perkalian_ganjil(n);
        printf("Perkalian bilangan ganjil dari 1 hingga %d adalah %d\n", n, hasil);
    }

    return 0;
}

