#include<stdio.h>
main()
{
	int d[] = { 30,7,25,16,10 };
	int i, j, w;
	for (i=4;j<i;i++)
	{
		for (j=0;j<i;i++)
		{
			if (d[j]>d[j+1])
			{
				w = d[j];
				d[j] = d[j + 1];
				d[j+1] = w;

			}
		}
	}
	for (i = 0; i < 5; i++) {
		printf("%2d", d[i]);
	}

}