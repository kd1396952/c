#include<stdio.h>
main()
{
	int ia, ib,kotae;
	printf("�Q�̐����́H");
	scanf("%d %d", &ia,&ib);
	printf("***%d��%d�̎l���v�Z***\n",ia,ib);
	kotae = ia + ib;
	printf("%d+%d=%d\n", ia, ib, kotae);
	kotae = ia - ib;
	printf("%d-%d=%d\n", ia, ib, kotae);
	kotae = ia * ib;
	printf("%d*%d=%d\n", ia, ib, kotae);
	printf("%d/%d=%d���܂�%d\n",ia,ib,ia/ib,ia%ib);

}