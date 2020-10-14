#include<stdio.h>
#define a 60
int main(void)
{
	int hour, min1,min2;
	scanf_s("%d", &min1);
	while (min1>0)
	{
		hour = min1 / a;
		min2 = min1 % a;
		printf("%d minutes = %d hours and %d minutes.", min1, hour, min2);
		scanf_s("%d", &min1);
	}

	return 0;
}
