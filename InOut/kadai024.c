#include<stdio.h>
main()
{
	int ia, ib,kotae;
	printf("‚Q‚Â‚Ì”š‚ÍH");
	scanf("%d %d", &ia,&ib);
	printf("***%d‚Æ%d‚Ìl‘¥ŒvZ***\n",ia,ib);
	kotae = ia + ib;
	printf("%d+%d=%d\n", ia, ib, kotae);
	kotae = ia - ib;
	printf("%d-%d=%d\n", ia, ib, kotae);
	kotae = ia * ib;
	printf("%d*%d=%d\n", ia, ib, kotae);
	printf("%d/%d=%d‚ ‚Ü‚è%d\n",ia,ib,ia/ib,ia%ib);

}