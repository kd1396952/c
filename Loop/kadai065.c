#include<stdio.h>
main()
{
	int i = 0, gokei = 0, a = 0;
	do {
		a++;
		gokei += i;
		printf("����(-999�ŏI��)�H");
		scanf("%d", &i);
	} while (i!= -999);
	a = a - 1;
	printf("���v��%d\n",gokei);
	printf("���ρ�%f",(float)gokei / a);
}