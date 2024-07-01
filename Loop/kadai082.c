#include<stdio.h>
main()
{
	int i,gokei=0,a=0;
	float ave;
	while (1) {
		printf("®”(-999‚ÅI—¹)H");
		scanf("%d", &i);
		if (i == -999) break;

		if (i < 0) continue;

		gokei += i;
		a++;
	}
		
		printf("‡Œv%d", gokei);
		ave = (float)gokei /a;
		printf("•½‹Ï%.3f", (float)ave);
	
}