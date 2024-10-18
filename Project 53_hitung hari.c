#include <stdio.h>

int main() {
    int day, month, year;
    int total_days = 0;

    printf("Masukkan tanggal (hari bulan tahun): ");
    scanf("%d %d %d", &day, &month, &year);
    for (int i = 1; i < year; i++) 
        total_days += (i % 4 == 0) ? 366 : 365;
    
    for (int j = 1; j < month; j++) {
        if (j == 2) { 
            total_days += (year % 4 == 0) ? 29 : 28;
        } else if (j == 4 || j == 6 || j == 9 || j == 11) {
            total_days += 30; 
        } else {
            total_days += 31; 
        }
    }
    
    total_days += day; 
    printf("Total hari hingga %d-%d-%d: %d hari\n", day, month, year, total_days);

    return 0;
}

