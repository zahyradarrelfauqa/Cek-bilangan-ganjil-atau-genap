#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;

    printf("Masukkan angka: ");
    scanf("%d", &num);

    original = num;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed) {
        printf("%d adalah bilangan palindrom.\n", original);
    } else {
        printf("%d bukan bilangan palindrom.\n", original);
    }

    return 0;
}

