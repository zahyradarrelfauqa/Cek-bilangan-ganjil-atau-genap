#include <stdio.h>

int jumlahHariDalamBulan(int bulan, int tahun) {
    if (bulan == 2) {
        return ( (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0) ) ? 29 : 28;
    }
    if (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11) {
        return 30;
    }
    return 31;
}

int hitungJumlahHari(int hari, int bulan, int tahun) {
    int jumlahHari = 0;
    for (int t = 1; t < tahun; t++) {
        jumlahHari += ( (t % 4 == 0 && t % 100 != 0) || (t % 400 == 0) ) ? 366 : 365;
    }
    for (int b = 1; b < bulan; b++) {
        jumlahHari += jumlahHariDalamBulan(b, tahun);
    }
    jumlahHari += hari;
    return jumlahHari;
}

int main() {
    int hari1, bulan1, tahun1;
    int hari2, bulan2, tahun2;

    printf("Masukkan tanggal pertama (dd mm yyyy): ");
    scanf("%d %d %d", &hari1, &bulan1, &tahun1);

    printf("Masukkan tanggal kedua (dd mm yyyy): ");
    scanf("%d %d %d", &hari2, &bulan2, &tahun2);

    int totalHari1 = hitungJumlahHari(hari1, bulan1, tahun1);
    int totalHari2 = hitungJumlahHari(hari2, bulan2, tahun2);

    int selisih = totalHari2 - totalHari1;

    printf("Selisih antara dua tanggal adalah %d hari.\n", selisih);

    return 0;
}

