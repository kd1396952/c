#include<stdio.h>
main()
{
	int i;
	char moji;
	printf("�A���t�@�x�b�g�啶���H");
	scanf("%c", &moji);
	for (i = moji; i < 'Z'; i++)
	{
		printf("%c ", moji);
		moji++;
	}
}