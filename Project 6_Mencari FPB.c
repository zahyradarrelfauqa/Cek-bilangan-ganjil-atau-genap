#include <stdio.h>
#include <conio.h>
int main()
{
int a,b,r,k;
printf("Masukkan nilai A : ");
scanf("%d",&a);
printf("Masukan nilai B : ");
scanf("%d",&b);
r = a%b;
while (r!=0)
{
a = b;
b = r;
r = a%b;
}
printf("FPB dari A dan B adalah : %d",b);
getch();

return 0;
}
