#include<stdio.h>
main()
{
	int ia, ib, kotae;
	ia = 100; ib = 7;
	printf("***100��7�̎l���v�Z***\n");
	kotae = ia + ib;
	printf("%d+%d=%d\n",ia,ib,kotae);
	kotae = ia - ib;
	printf("%d-%d=%d\n", ia, ib, kotae);
	kotae = ia * ib;
	printf("%d*%d=%d\n", ia, ib, kotae);
	printf("%d/%d=%d���܂�%d\n", ia / ib, ia % ib);
	//printf("100/7=%d���܂�%d\n",100/7,100%7);

}