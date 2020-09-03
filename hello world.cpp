// hello world.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "math.h"


int main()
{
	printf("Hello wordld\n");
	printf("A=");
	int a;
	scanf("%d", &a);
	printf("B=");
	int b;
	scanf("%d", &b);
	printf("C=");
	int c;
	scanf("%d", &c);
	double d = b * b - 4 * a * c;
	printf("d=%lf\n", d);
	if (d < 0) printf("wrong input data\n");
	else if (d == 0) {
		double x = (-b / (2 * a));
		printf("root= %lf\n", x);
	}
	else {
		double sd = sqrt(d);
		double x1 = (-b - sd) / (2 * a);
		double x2 = (-b + sd) / (2 * a);
		printf("root1= %lf\nroot2= %lf\n", x1, x2);
	}
	scanf("%d", &a);
	return d;
}

