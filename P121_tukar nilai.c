#include <stdio.h>

void tukar(int a, int b);

int main() {
    int a = 5;
    int b = 10;

    printf("a sebelum ditukar = %d\n", a);
    printf("b sebelum ditukar = %d\n", b);

    tukar(a, b);

    printf("a setelah fungsi tukar = %d\n", a);
    printf("b setelah fungsi tukar = %d\n", b);

    return 0;
}

void tukar(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("nilai a setelah ditukar pada fungsi = %d\n", a);
    printf("nilai b setelah ditukar pada fungsi = %d\n", b);
}

