#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a, b, c, Res;
	printf("Input numbe:\n");
	scanf("%d", &a);	
	scanf("%d", &b);
	scanf("%d", &c);
	double x1, x2;
	Res = b*b - 4*a*c;
	printf("Diskre:%d\n", Res);
	if (Res < 0) printf("Kor net");
	if (Res == 0) {
		x1 = (-b - sqrt(Res))/(2*a);
		printf("x1=%.2lf", x1);        
	}
	if (Res >0) {
		x1 = (-b - sqrt(Res))/(2*a);
		x2 = (-b + sqrt(Res))/(2*a);
		printf("x1=%.2lf\nx2=%.2lf", x1,x2);
	}
	return 0;
}
