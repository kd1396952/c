#include<stdio.h>
main()
{
	int i;
	printf("整数(-999で入力終了)？");
	scanf("%d", &i);
	while (i != -999)
	{
		printf("8進数=%o  ", i);
		printf("16進数=%x\n", i);
		printf("整数(-999で入力終了)？");
		scanf("%d", &i);
	}
}