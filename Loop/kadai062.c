#include<stdio.h>
main()
{
	int i;
	i = 20;
	do {
		printf(" %d", i);
		i--;
	} while (i > 10);
	printf("\n");
	do {
		printf(" %2d", i);
		i--;
	} while (i >= 1);
}