#include <stdio.h>

int main(){
 int i, j, n;
 
 printf("masukan n : ");
 scanf("%d", &n);
 
 for (i=1; i<2*n; i++){
  for (j=1; j<2*n; j++){
   if (  (i<=j && i+j<=2*n)  ||  (i>n && i>=j && i+j>=2*n)  ) printf("*");
    else printf(" ");
  }
  printf("\n");
 } 
}
