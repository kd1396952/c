#include<stdio.h>
main()
{
	int ia, ib, kotae;
	ia = 100; ib = 7;
	printf("***100と7の四則計算***\n");
	kotae = ia + ib;
	printf("%d+%d=%d\n",ia,ib,kotae);
	kotae = ia - ib;
	printf("%d-%d=%d\n", ia, ib, kotae);
	kotae = ia * ib;
	printf("%d*%d=%d\n", ia, ib, kotae);
	printf("%d/%d=%dあまり%d\n", ia / ib, ia % ib);
	//printf("100/7=%dあまり%d\n",100/7,100%7);

}