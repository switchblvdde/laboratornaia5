#define _CRT_SECURE_NO_DEPRECATE
#include <stdlib.h>
#include<stdio.h>
#include <math.h>
int main() {
	double x = 0.0374;
	int z = 16;
	double y = -0.825;
	double chislitel;
	double znamenatel;
	double v;
	chislitel = 1 + pow(sin(x + y),2);
	znamenatel = fabs(x - (2 * y) / (1 + pow(x,2) * pow(y,2)));
	v = chislitel / znamenatel *pow(x,fabs(y))+pow(cos(atan(1.0/ z)), 2);
	printf(" %.4lf\n",v);
	system("pause");
	return 0;

}