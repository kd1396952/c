#include<stdio.h>
main()
{
	int i;
	char moji;
	printf("10進数の整数？");
	scanf("%d", &i);
	printf("アルファベット(o or h or d)？");
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