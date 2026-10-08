#define _CRT_SECURE_NO_DEPRECATE
#include <stdlib.h>
#include<stdio.h>
#include <math.h>
double chislitel(double x, double y)
{
return 1 + pow(sin(x + y), 2);
}
double znamenatel(double x, double y)
{
return fabs(x - (2 * y) / (1 + pow(x, 2) * pow(y, 2)));
}
int main() {
	double x,y,z,v;
	scanf_s("%lf %lf %lf",&x,&y,&z);
	v = chislitel(x,y) / znamenatel(x,y) * pow(x, fabs(y)) + pow(cos(atan(1.0 / z)), 2);
	printf(" %.4lf\n", v);
	system("pause");
	return 0;

}
