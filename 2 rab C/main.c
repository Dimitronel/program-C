#include <stdio.h>
#include <stdlib.h>

int main(){
 int i, j, n, k; 
 double ar[n][n], m[n][n];
 
 printf("Vvedite razmer massiva raz? :\n");
 scanf("%d", &n);
 
 printf("Vvedite elem massiva raz? %dx%d:\n", n, n);
 for (i = 0; i < n; i++){
  for (j = 0; j < n; j++){
   scanf("%lf", &ar[i][j]);
  }
 }
 
 double g = 0, p = 0;
 for (i = 0; i < n; i++){
  for (j = 0; j < n; j++){
   if (i == j){
    g += ar[i][j];}
   if (2 == i+j){
    p += ar[i][j];}
  }
 } 
 printf("Summa elementov glavnoy diagonaly: %.1lf\n", g);
 printf("Summa elementov pobochnoy diagonaly?: %.1lf\n", p);
 
 printf("Vvedite elem massiva raz %dx%d:\n", n, n);
 for (i = 0; i < n; i++){
  for (j = 0; j < n; j++){
   scanf("%lf", &m[i][j]);
  }
 }
 
 printf("Kvadrat matric:\n");
 for (i = 0; i < n; i++){
  for (j = 0; j < n; j++){
   for (k = 0; k < n; k++){
    m[i][j] += m[k][j]    *    m[i][k];
   }
  }
 }
 
 for (i = 0; i < n; i++){
  for (j = 0; j < n; j++){
   printf("%lf ", m[i][j]);
  }
  printf("\n");
 }
 
 return 0;
}




