#include<stdio.h>
main()
{
	int sum, gokei;
	sum = 1, gokei = 1;
	printf("%d+", sum);
	while (gokei <= 300)
	{
		sum++;
		printf("%d+",sum);
		gokei += sum;
	}
	printf("\b=%d", gokei);
}