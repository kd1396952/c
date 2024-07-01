#include<stdio.h>
main()
{
	int i=0;
	for (1;;)
	{
		i++;
		if (i > 20) break;
		if (i % 2 == 0) continue;
		printf("%d ", i);
	
	}
	

}