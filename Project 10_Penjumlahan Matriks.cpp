#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x, y, z, a, matriks1[10][10], matriks2[10][10], hasil[10][10];
  printf("Masukkan jumlah baris matriks:");
  scanf("%d", &z);
  printf("Masukkan jumlah kolom matriks:");
  scanf("%d", &a);
  printf("\n\n");
  printf("Masukkan elemen matriks pertama:\n");
  for (x = 0; x < z; x++)
  {
    for (y = 0; y < a; y++)
    {
      scanf("%d", &matriks1[x][y]);
    }
  }
  printf("\n\n");
  printf("Masukkan elemen matriks kedua:\n");
  for (x = 0; x < z; x++)
  {
    for (y = 0; y < a; y++)
    {
      scanf("%d", &matriks2[x][y]);
    }
  }
  printf("\n\n");
  printf("Hasil penjumlahan matriks: \n\n");
  for (x = 0; x < z; x++)
  {
    for (y = 0; y < a; y++)
    {
      hasil[x][y] = matriks1[x][y] + matriks2[x][y];
      printf("%d \t", hasil[x][y]);
    }
    printf("\n\n");
  }
  return 0;
}
