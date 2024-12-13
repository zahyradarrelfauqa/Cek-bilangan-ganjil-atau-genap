#include <stdio.h>

int panjang_string(char str[]) {
    if (str[0] == '\0')
        return 0;
    return 1 + panjang_string(&str[1]);
}

int main() {
    char str[100];
    printf("Masukkan string: ");
    scanf("%s", str);
    printf("Panjang string adalah %d\n", panjang_string(str));
    return 0;
}

