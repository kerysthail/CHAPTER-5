#include<stdio.h>
int main(void)
{
	int count, sum, day,squre;

	count = 0;
	sum = 0;
	printf("Please input the number of days:");
	scanf_s("%d", &day);
	while (count++<day)
	{
		squre = count * count;
		sum += squre;
	}
	printf("You've made %d dollars.\n",sum);

	return 0;
}
