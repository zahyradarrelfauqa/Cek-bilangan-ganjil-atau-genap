#include <stdio.h>

int perkalian_kuadrat(int n) {
    if (n <= 0)
        return 1;
    return (n * n) * perkalian_kuadrat(n - 1);
}

int main() {
    int n;
    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    printf("Perkalian bilangan kuadrat dari 1 hingga %d adalah %d\n", n, perkalian_kuadrat(n));
    return 0;
}

