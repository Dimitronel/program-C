#include <stdio.h> 
#include <math.h> 
#include "triangle.h" 

int is_triangle(double a, double b, double c) {
    if (a + b <= c || a + c <= b || b + c <= a) {
        return 0;
    } else {
        return 1;
    }
}

int main(){ 
 double a, b, c; 
 printf("Vvedite storony : "); 
 scanf("%lf %lf %lf", &a, &b, &c); 
 if (is_triangle(a, b, c)) { 
        printf("Perimeter : %.2lf\n", perimeter(a, b, c)); 
        printf("Square : %.2lf\n", square(a, b, c)); 
 } else { 
        printf("Treugolnik  net.\n"); 
 } 
}

