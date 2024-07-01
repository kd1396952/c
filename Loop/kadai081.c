#include<stdio.h>
main()
{
	int i,gokei,a;
	a = 0;
	gokei = 0;
	float ave;
	while(1){
		printf("®”(-999‚ÅI—¹)H");
		scanf("%d", &i);
		if(i == -999) break;
		gokei += i;
		a++;
		
	}
	printf("‡Œv=%d\n",gokei);
	ave = (float)gokei / (float)a;
	printf("•½‹Ï=%f",(float)ave);

}