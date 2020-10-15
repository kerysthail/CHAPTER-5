#include<stdio.h>
int main(void)
{
	int count, sum, day;

	count = 0;
	sum = 0;
	printf("Please input the number of days:");
	scanf_s("%d", &day);
	while (count++<day)
	{
		sum += count;
	}
	printf("You've made %d dollars.\n",sum);

	return 0;
}
