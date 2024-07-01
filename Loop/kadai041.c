#include<stdio.h>
main()
{
	int i,gokei,a;
	gokei = 0,a=0;
	printf("整数（－９９９で終了）？");
	scanf("%d", &i);
	while (i != -999) {
		gokei += i;
		printf("整数（－９９９で終了）？");
		scanf("%d", &i);
		a++;
	}
	printf("合計＝%d", gokei);
	printf("平均＝%.2f",(float)gokei/a); 
}