#include<stdio.h>
main() {
	int a,gokei;
	gokei = 0;
	while (1) {
		printf("数入れて");
		scanf("%d", &a);
			if (a == -999) break;
			gokei += a;
		}
	printf("合計=%d\n", gokei);
	}
	
	
