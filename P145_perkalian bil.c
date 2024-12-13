#include <stdio.h>

int perkalian(int a, int b) {
    if (b == 0)
        return 0;
    return a + perkalian(a, b - 1);
}

int main() {
    int a, b;
    printf("Masukkan dua bilangan: ");
    scanf("%d %d", &a, &b);
    printf("Hasil perkalian adalah %d\n", perkalian(a, b));
    return 0;
}

