#include<stdio.h>
main()
{
	int i;
	i = 20;
	while (i != 10)
	{
		printf(" %d", i);
		i--;
	}
	printf("\n");
	while (i != 0)
	{
		printf(" %2d", i);
		i--;
	}
}