#include <stdio.h>
#include <math.h> 

double calculatePerimeter(double a, double b, double c) {
    return a + b + c;
}

double calculateArea(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s  *  (s - a)  *  (s - b)  *  (s - c));
}

int main() {
    double a, b, c;
    printf("Vvod dlin storon: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Nerevenstva treyg.\n");
        return 1;
    }

    double perimeter = calculatePerimeter(a, b, c);
    double area = calculateArea(a, b, c);

    printf("Pirimetr treyg: %lf\n", perimeter);
    printf("Ploshad treyg: %lf\n", area);

    return 0;
}
