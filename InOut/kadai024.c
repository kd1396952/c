#include<stdio.h>
main()
{
	int ia, ib,kotae;
	printf("２つの数字は？");
	scanf("%d %d", &ia,&ib);
	printf("***%dと%dの四則計算***\n",ia,ib);
	kotae = ia + ib;
	printf("%d+%d=%d\n", ia, ib, kotae);
	kotae = ia - ib;
	printf("%d-%d=%d\n", ia, ib, kotae);
	kotae = ia * ib;
	printf("%d*%d=%d\n", ia, ib, kotae);
	printf("%d/%d=%dあまり%d\n",ia,ib,ia/ib,ia%ib);

}