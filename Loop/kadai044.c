#include<stdio.h>
main()
{
	int i;
	printf("����(-999�œ��͏I��)�H");
	scanf("%d", &i);
	while (i != -999)
	{
		printf("8�i��=%o  ", i);
		printf("16�i��=%x\n", i);
		printf("����(-999�œ��͏I��)�H");
		scanf("%d", &i);
	}
}