#include<stdio.h>
main()
{
	int num;
	printf("整数を入力\n");
	scanf("%d", &num);
	num=num/10;
	switch (num){
	case (1):
		printf("10点台です\n");
		break;
	case (2):
		printf("20点台です\n");
		break;
	case (3):
		printf("30点台です\n");
		break;
	case (4):
		printf("40点台です\n");
		break;
	default:
		printf("エラー\n");
		break;
	}
}