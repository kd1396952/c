#include<stdio.h>
main()
{
	int i,gokei,a;
	a = 0;
	gokei = 0;
	float ave;
	while(1){
		printf("����(-999�ŏI��)�H");
		scanf("%d", &i);
		if(i == -999) break;
		gokei += i;
		a++;
		
	}
	printf("���v=%d\n",gokei);
	ave = (float)gokei / (float)a;
	printf("����=%f",(float)ave);

}