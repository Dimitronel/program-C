#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double x1, x2;

    printf("Vvod a: ");
    scanf("%lf", &a);
    printf("Vvod b: ");
    scanf("%lf", &b);
    printf("Vvod c: ");
    scanf("%lf", &c);

    double discriminant = b  *  b - 4  *  a  *  c;

    if (discriminant < 0) {
        printf("Korney net\n");
    } else {
        x1 = (-b + sqrt(discriminant)) / (2  *  a);
        x2 = (-b - sqrt(discriminant)) / (2  *  a);

        printf("Korni: x1 = %.2lf, x2 = %.2lf\n", x1, x2);
    }

    return 0;
}
