#include<stdio.h>
main()
{
	int a, b = 0;
	for (a = 32; a < 126; a++)
	{
		printf("%X %c ", a,a);
		b++;
		if (b == 10) {
			printf("\n");
			b = 0;
		}
	}




}