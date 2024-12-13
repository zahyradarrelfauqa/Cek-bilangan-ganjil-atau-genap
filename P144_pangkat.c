#include <stdio.h>

int pangkat(int a, int b) {
    if (b == 0)
        return 1;
    return a * pangkat(a, b - 1);
}

int main() {
    int a, b;
    printf("Masukkan basis dan pangkat: ");
    scanf("%d %d", &a, &b);
    printf("%d pangkat %d adalah %d\n", a, b, pangkat(a, b));
    return 0;
}


