# CHAPTER5
#include<stdio.h>
int main(void)
{
	int n = 0;
	int a;

	printf("Please input a number.");
	scanf_s("%d", &a);
	while (n<=10)
	{
		printf("%d\n", a);
		a = a + 1;
		n = n + 1;
	}

	return 0;
}
