#include<stdio.h>
main()
{
	int i,gokei=0,a=0;
	float ave;
	while (1) {
		printf("����(-999�ŏI��)�H");
		scanf("%d", &i);
		if (i == -999) break;

		if (i < 0) continue;

		gokei += i;
		a++;
	}
		
		printf("���v��%d", gokei);
		ave = (float)gokei /a;
		printf("���ρ�%.3f", (float)ave);
	
}