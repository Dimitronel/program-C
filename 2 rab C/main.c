#include <stdio.h>
#include <stdlib.h>

int main(){
 int i, j, n, k; 
 double ar[3][3], m[2][2];
 
 printf("Vvedite elem massiva raz? 3x3:\n");
 for (i = 0; i < 3; i++){
  for (j = 0; j < 3; j++){
   scanf("%lf", &ar[i][j]);
  }
 }
 
 double g = 0, p = 0;
 for (i = 0; i < 3; i++){
  for (j = 0; j < 3; j++){
   if (i == j){
    g += ar[i][j];}
   if (2 == i+j){
    p += ar[i][j];}
  }
 } 
 printf("Summa elementov glavnoy diagonaly: %.1lf\n", g);
 printf("Summa elementov pobochnoy diagonaly?: %.1lf\n", p);
 
 printf("Vvedite elem massiva raz 2x2:\n");
 for (i = 0; i < 2; i++){
  for (j = 0; j < 2; j++){
   scanf("%d", &m[i][j]);
  }
 }
 
 printf("Kvadrat matric:\n");
 for (i = 0; i < 2; i++){
  for (j = 0; j < 2; j++){
   for (k = 0; k < 2; k++){
    m[i][j] += m[k][j]  *  m[i][k];
   }
  }
 }
 
 for (i = 0; i < 2; i++){
  for (j = 0; j < 2; j++){
   printf("%d ", m[i][j]);
  }
  printf("\n");
 }
 
 return 0;
} 

