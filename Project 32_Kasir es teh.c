#include <stdio.h>

int main() {
    char nama_kedai[50] = "Warung Es Teh Jumbo";
    float harga_minuman = 3000.0;
    int jumlah_pesan;
    float total_harga;
    
    printf("Kasir Es Teh Jumbo\n", nama_kedai);
    printf("Harga Minuman   : %.2f rupiah\n", harga_minuman);
    printf("Masukkan jumlah pesanan: ");
    scanf("%d", &jumlah_pesan);
    total_harga = harga_minuman * jumlah_pesan;
    printf("Total Harga      : %.2f rupiah\n", total_harga);
    
    return 0;
}


