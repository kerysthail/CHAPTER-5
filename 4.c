#include<stdio.h>
#define in 0.3937
#define fe 0.0328
int main(void)
{
	float cm, feet, inch;

	printf("Enter a height in centimeters:");
	scanf_s("%f", &cm);
	while (cm>0)
	{
		feet = cm * fe;
		inch = cm * in;
		printf("%.1f cm = %.1f feet,%.1f inches\n", cm, feet, inch);
		printf("Enter a height in centimeters (<=0 to quit):");
		scanf_s("%f", &cm);
	}

	return 0;
}
