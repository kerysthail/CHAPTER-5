#include<stdio.h>
int main(void)
{
	int day1, day2, week;

	printf("Please input the number of days.\n");
	scanf_s("%d", &day1);
	while (day1>0)
	{
		week = day1 / 7;
		day2 = day1 - (7 * week);
		printf("%d days are %d weeks,%d days.", day1, week, day2);
		scanf_s("%d", &day1);
	}

	return 0;
}
