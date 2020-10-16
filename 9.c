# CHAPTER-5
#include<stdio.h>
void Temperatures(double n);
int main(void)
{
	int a;
	double ft;

	printf("Please input the temperature:");
	a = scanf_s("%lf", &ft);
	while (a==1)
	{
		Temperatures(ft);
		printf("Please input next temperature:(q to quit)");
		a = scanf_s("%lf", &ft);
	}

	return 0;
}
void Temperatures(double n)
{
	double ct, kt;
	ct = 5.0 / 9.0 * (n - 32.0);
	kt = ct + 273.16;
	printf("Celsius temperature is %.2lf.\nFahrenheit temperature is %.2lf.\nKelvin temperature is %.2lf.\n", ct, n, kt);
}
