#include<stdio.h>
main()
{
	int i;
	char moji;
	printf("10�i���̐����H");
	scanf("%d", &i);
	printf("�A���t�@�x�b�g(o or h or d)�H");
	scanf("%*c%c", &moji);
	switch (moji)
	{
	case'o':
		printf("%o", i);
		break;
	case'h':
		printf("%x", i);
		break;
	case'd':
		printf("%d", i);
		break;
	}
}