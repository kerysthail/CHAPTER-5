#include<stdio.h>
double cube(double n);
int main(void)
{
	double a,b;
	printf("Please input a number:");
	scanf_s("%lf", &a);
	b=cube(a);
	printf("cubed = %f",b);

	return 0;
}
double cube(double n)
{
	double c;
	c = n * n * n;
	return c;
}
